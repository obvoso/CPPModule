/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 14:17:28 by soo               #+#    #+#             */
/*   Updated: 2023/04/01 02:37:58 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <vector>
# include <deque>
# include <ctime>
# include <iomanip>

# define THRESHOLDS 12

class PmergeMe {
 private:
	std::vector<int> _vector;
	std::deque<int>  _deque;
	double _vectorTime;
	double _dequeTime;

 public:
	PmergeMe(void);
	PmergeMe(const PmergeMe& obj);
	~PmergeMe();
	PmergeMe& operator=(const PmergeMe& obj);

	void init(char **argv);
	void vectorExecute(int size);
	void dequeExecute(int size);
	
	void printError(void);
	void printResult(char **argv, int size);


	// ** TEMPELTE ** //

	template<typename T>
	void merge(T &data, int begin, int mid, int end)
	{
		T sorted(end - begin + 1);

		int left = begin;
		int right = mid + 1;
		int sortedIdx = 0;

		while (left <= mid && right <= end)
		{
			if (data[left] < data[right])
				sorted[sortedIdx++] = data[left++];
			else
				sorted[sortedIdx++] = data[right++];
		}
		while (left <= mid)
			sorted[sortedIdx++] = data[left++];
		while (right <= end)
			sorted[sortedIdx++] = data[right++];
		for (int i = begin, j = 0; i <= end; i++, j++)
			data[i] = sorted[j];
	}

	template<typename T>
	void insertionSort(T &data, int begin, int end)
	{
		int i, j, key;

		for (i = begin + 1; i <= end; i++)
		{
			key = data[i];
			for(j = i - 1; j >= begin && key < data[j]; j--)
				data[j + 1] = data[j];
			data[j + 1] = key;
		}
	}

	template<typename T>
	void mergeSort(T &data, int begin, int end)
	{
		if (begin > end)
			return ;
		if (end - begin <= THRESHOLDS)
			insertionSort(data, begin, end);
		else
		{
			int mid = (begin + end) / 2;
			mergeSort(data, begin, mid);
			mergeSort(data, mid + 1, end);
			merge(data, begin, mid, end);
		}
	}
};

#endif
