/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:12:40 by soo               #+#    #+#             */
/*   Updated: 2023/02/04 19:53:09 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void test_sample(){
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << "shortest : " << sp.shortestSpan() << std::endl;
	std::cout << "longest : " << sp.longestSpan() << std::endl;
}

void test_addNumbers(){
	Span sp = Span(10);
	std::list<int> copyArr;

	try
	{
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	for(int i = 0; i < 5; i++)
		copyArr.push_back(i);

	sp.addNumbers(copyArr.begin(), copyArr.end());
    sp.print();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void test_errorCase1()
{
	Span sp = Span(5);
    try 
    {
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        sp.addNumber(0);
        sp.addNumber(33);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void test_errorCase2()
{
	Span sp = Span(6);
	std::list<int> copyArr;

    try 
    {
        sp.addNumber(6);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
		std::cout << e.what() << std::endl;
    }
}

void test_10k() {
	try
	{
		Span	test(10000);

		srand(time(NULL));
		for (int i = 0; 10000 > i; i++)
		{
			int value = rand();
			test.addNumber(value);
		}
		std::cout << "shortest : " << test.shortestSpan() << std::endl;
		std::cout << "longest : " << test.longestSpan() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
int main() {

	test_sample();
    std::cout << std::endl;
	test_addNumbers();
    std::cout << std::endl;
    test_errorCase1();
	std::cout << std::endl;
    test_errorCase2();
	std::cout << std::endl;
	test_10k();
	return 0;
}