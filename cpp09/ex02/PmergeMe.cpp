/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:01:25 by soo               #+#    #+#             */
/*   Updated: 2023/04/01 01:58:34 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <cstdlib>
#include <ctime>
#include <vector>

PmergeMe::PmergeMe(void) {}
PmergeMe::PmergeMe(const PmergeMe& obj) 
{
	*this = obj;
}

PmergeMe::~PmergeMe() {}
PmergeMe& PmergeMe::operator=(const PmergeMe& obj) 
{
	if (this == &obj)
		return (*this);
	this->_vector = obj._vector;
	this->_deque = obj._deque;
	this->_vectorTime = obj._vectorTime;
	this->_dequeTime = obj._dequeTime;
	return (*this);
}

void PmergeMe::printError(void)
{
	std::cout << "Error" << std::endl;
	exit (1);
}

void PmergeMe::printResult(char **argv, int size)
{
	std::vector<int>::iterator vectorIt = _vector.begin();

	std::cout << "\033[31mBefore: \033[0m";
	for(int i = 1; i <= size; i++)
		std::cout << argv[i] << " ";
	std::cout << "\n\033[32mAfter: \033[0m";
	for (; vectorIt != _vector.end(); vectorIt++)
		std::cout << *vectorIt << " ";
	std::cout << "\nTime to process a range of " << std::setw(5) << size <<
		" elements with std::vector : " << std::setw(8) << _vectorTime << " us" << std::endl;
	std::cout << "Time to process a range of " << std::setw(5) << size <<
		" elements with std::deque : " << std::setw(8) << _dequeTime << " us" << std::endl;
}

void PmergeMe::initVector(char **argv)
{
	std::vector<int> v;
	int integer;

	while (*argv)
	{
		integer = atoi(*argv);
		if ((!integer && **argv != '0') || integer < 0)
			printError();
		v.push_back(integer);
		argv++;
	}
	_vector = v;
}

void PmergeMe::vectorMerge(std::vector<int> &vector, int begin, int mid, int end)
{
	std::vector<int> sorted(end - begin + 1);

	int left = begin;
	int right = mid + 1;
	int sortedIdx = 0;

	while (left <= mid && right <= end)
	{
		if (vector[left] < vector[right])
			sorted[sortedIdx++] = vector[left++];
		else
			sorted[sortedIdx++] = vector[right++];
	}
	while (left <= mid)
		sorted[sortedIdx++] = vector[left++];
	while (right <= end)
		sorted[sortedIdx++] = vector[right++];
	for (int i = begin, j = 0; i <= end; i++, j++)
		vector[i] = sorted[j];
}

void PmergeMe::vectorInsertionSort(std::vector<int> &vector, int begin, int end)
{
	int i, j, key;

	for (i = begin + 1; i <= end; i++)
	{
		key = vector[i];
		for(j = i - 1; j >= begin && key < vector[j]; j--)
			vector[j + 1] = vector[j];
		vector[j + 1] = key;
	}
}

void PmergeMe::vectorMergeSort(std::vector<int> &vector, int begin, int end)
{
	if (begin > end)
		return ;
	if (end - begin <= THRESHOLDS)
		vectorInsertionSort(vector, begin, end);
	else
	{
		int mid = (begin + end) / 2;
		vectorMergeSort(vector, begin, mid);
		vectorMergeSort(vector, mid + 1, end);
		vectorMerge(vector, begin, mid, end);
	}
}

void PmergeMe::vectorExecute(int size)
{
	clock_t start, finish;

	start = clock();
	vectorMergeSort(_vector, 0, size);
	finish = clock();
	_vectorTime = static_cast<double>(finish - start) / 1000;
}

//deque
void PmergeMe::initDeque(char **argv)
{
	std::deque<int> v;
	int integer;

	while (*argv)
	{
		integer = atoi(*argv);
		if ((!integer && **argv != '0') || integer < 0)
			printError();
		v.push_back(integer);
		argv++;
	}
	_deque = v;
}

void PmergeMe::dequeMerge(std::deque<int> &deque, int begin, int mid, int end)
{
	std::deque<int> sorted(end - begin + 1);

	int left = begin;
	int right = mid + 1;
	int sortedIdx = 0;

	while (left <= mid && right <= end)
	{
		if (deque[left] < deque[right])
			sorted[sortedIdx++] = deque[left++];
		else
			sorted[sortedIdx++] = deque[right++];
	}
	while (left <= mid)
		sorted[sortedIdx++] = deque[left++];
	while (right <= end)
		sorted[sortedIdx++] = deque[right++];
	for (int i = begin, j = 0; i <= end; i++, j++)
		deque[i] = sorted[j];
}

void PmergeMe::dequeInsertionSort(std::deque<int> &deque, int begin, int end)
{
	int i, j, key;

	for (i = begin + 1; i <= end; i++)
	{
		key = deque[i];
		for(j = i - 1; j >= begin && key < deque[j]; j--)
			deque[j + 1] = deque[j];
		deque[j + 1] = key;
	}
}

void PmergeMe::dequeMergeSort(std::deque<int> &deque, int begin, int end)
{
	if (begin > end)
		return ;
	if (end - begin <= THRESHOLDS)
		dequeInsertionSort(deque, begin, end);
	if (begin < end)
	{
		int mid = (begin + end) / 2;
		dequeMergeSort(deque, begin, mid);
		dequeMergeSort(deque, mid + 1, end);
		dequeMerge(deque, begin, mid, end);
	}
}

void PmergeMe::dequeExecute(int size)
{
	clock_t start, finish;

	start = clock();
	dequeMergeSort(_deque, 0, size);
	finish = clock();

	_dequeTime = static_cast<double>(finish - start) / 1000;
	
}