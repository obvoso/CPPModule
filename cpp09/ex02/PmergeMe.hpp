/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 14:17:28 by soo               #+#    #+#             */
/*   Updated: 2023/04/01 01:54:28 by soo              ###   ########.fr       */
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

	//vector
	void initVector(char **argv);
	void vectorMerge(std::vector<int> &vector, int begin, int mid, int end);
	void vectorInsertionSort(std::vector<int> &vector, int begin, int end);
	void vectorMergeSort(std::vector<int> &vector, int begin, int end);
	void vectorExecute(int size);
	
	//deque
	void initDeque(char **argv);
	void dequeMerge(std::deque<int> &deque, int begin, int mid, int end);
	void dequeInsertionSort(std::deque<int> &deque, int begin, int end);
	void dequeMergeSort(std::deque<int> &deque, int begin, int end);
	void dequeExecute(int size);
	
	void printError(void);
	void printResult(char **argv, int size);
};

#endif
