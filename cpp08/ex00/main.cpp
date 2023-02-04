/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 15:20:45 by soo               #+#    #+#             */
/*   Updated: 2023/02/04 15:43:11 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#define MAX 7

int main(void)
{
    std::list<int> list;
    std::vector<int> vector;
    std::deque<int> deque;

    srand(time(NULL));
    for (int i = 0; i < MAX; i++)
    {
        int tmp = rand() % 7;
        std::cout << tmp << " ";
        list.push_back(tmp);
        vector.push_back(tmp);
        deque.push_back(tmp);
    }
    std::cout << std::endl << std::endl;
    try
    {
        std::cout << "list : " << *(easyfind(list, 3)) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << "vector : " << *(easyfind(vector, 3)) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << "deque : " << *(easyfind(deque, 3)) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    // error
    try
    {
        std::cout << "list : " << *(easyfind(list, 7)) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << "vector : " << *(easyfind(vector, 7)) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << "deque : " << *(easyfind(deque, 7)) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}