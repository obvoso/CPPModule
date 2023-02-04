/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 20:04:53 by soo               #+#    #+#             */
/*   Updated: 2023/02/04 20:06:50 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
    {
        MutantStack<int> mstack;

        mstack.push(5);
        mstack.push(17);

        std::cout << mstack.top() << std::endl;

        mstack.pop();

        std::cout << mstack.size() << std::endl;

        mstack.push(3);
        mstack.push(5);
        mstack.push(737); 
        //[...] 
        mstack.push(0);

        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();

        ++it;
        --it;

        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it; 
        }
        std::stack<int> s(mstack);
	}

	// std::cout << std::endl;
	// {
	// 	MutantStack<int> mstack;

	// 	mstack.push(5);
	// 	mstack.push(17);
	// 	mstack.pop();
	// 	mstack.push(3);
	// 	mstack.push(5);
	// 	mstack.push(737);
	// 	mstack.push(0);
	// 	std::cout << "top " << mstack.top() << std::endl;
	// 	std::cout << "size " << mstack.size() << std::endl;

	// 	/*
	// 	0 - top (end - 1)
	// 	737
	// 	5
	// 	3
	// 	x17 (pop)
	// 	5 - begin
	// 	*/

	// 	MutantStack<int>::iterator it = mstack.begin();
	// 	MutantStack<int>::iterator ite = mstack.end();
	// 	++it;
	// 	--it;

	// 	while (it != ite)
	// 	{
	// 		std::cout << *it << std::endl;
	// 		++it;
	// 	}
	// 	std::stack<int> s(mstack);
	// }
	// std::cout << std::endl;
	// {

	// 	std::list<int> mstack;

	// 	mstack.push_back(5);
	// 	mstack.push_back(17);
	// 	mstack.pop_back();
	// 	mstack.push_back(3);
	// 	mstack.push_back(5);
	// 	mstack.push_back(737);
	// 	mstack.push_back(0);
	// 	std::cout << "top " << mstack.back() << std::endl;
	// 	std::cout << "size " << mstack.size() << std::endl;

	// 	/*
	// 	0 - top (end - 1)
	// 	737
	// 	5
	// 	3
	// 	x17 (pop)
	// 	5 - begin
	// 	*/

	// 	std::list<int>::iterator it = mstack.begin();
	// 	std::list<int>::iterator ite = mstack.end();
	// 	++it;
	// 	--it;

	// 	while (it != ite)
	// 	{
	// 		std::cout << *it << std::endl;
	// 		++it;
	// 	}
	// 	std::list<int> s(mstack);
	// }
	return 0;
}