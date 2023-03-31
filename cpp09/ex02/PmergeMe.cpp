/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:01:25 by soo               #+#    #+#             */
/*   Updated: 2023/04/01 02:43:22 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void) {}
PmergeMe::~PmergeMe() {}
PmergeMe::PmergeMe(const PmergeMe& obj) 
{
	*this = obj;
}

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
	int i = 1;
	std::vector<int>::iterator vectorIt = _vector.begin();

	std::cout << "\033[31mBefore: \033[0m";
	for(; i <= size; i++)
	{
		if (i > 10)
		{
			std::cout << "[...]";
			break;
		}
		std::cout << argv[i] << " ";
	}
	
	std::cout << "\n\033[32mAfter: \033[0m";
	for (i = 0; vectorIt != _vector.end(); vectorIt++)
	{
		if (++i > 10)
		{
			std::cout << "[...]";
			break;
		}
		std::cout << *vectorIt << " ";
	}
	std::cout << "\nTime to process a range of " << std::setw(5) << size 
			  << " elements with std::vector : " << std::setw(8) << _vectorTime 
			  << " us" << std::endl;
	std::cout << "Time to process a range of " << std::setw(5) << size 
			  << " elements with std::deque : " << std::setw(8) << _dequeTime 
			  << " us" << std::endl;
}

void PmergeMe::init(char **argv)
{
	std::vector<int> vector;
	std::deque<int> deque;
	int integer;

	while (*argv)
	{
		integer = atoi(*argv);
		if ((!integer && **argv != '0') || integer < 0)
			printError();
		vector.push_back(integer);
		deque.push_back(integer);
		argv++;
	}
	_vector = vector;
	_deque = deque;
}

void PmergeMe::vectorExecute(int size)
{
	clock_t start, finish;

	start = clock();
	mergeSort(_vector, 0, size);
	finish = clock();
	
	_vectorTime = static_cast<double>(finish - start) / 1000;
}

void PmergeMe::dequeExecute(int size)
{
	clock_t start, finish;

	start = clock();
	mergeSort(_deque, 0, size);
	finish = clock();

	_dequeTime = static_cast<double>(finish - start) / 1000;
}
