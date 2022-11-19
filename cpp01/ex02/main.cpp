/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:31:57 by soo               #+#    #+#             */
/*   Updated: 2022/11/19 17:47:50 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *ptr = &str;
    std::string &ref = str;

    std::cout << "Address\n" << "--------------------" << std::endl;
    std::cout << "str : " << &str << std::endl;
    std::cout << "ptr : " << ptr << std::endl;
    std::cout << "ref : " << &ref << std::endl;
    std::cout << "--------------------" << std::endl;

    std::cout << "Value\n" << "----------------------" << std::endl;
    std::cout << "str : " << str << std::endl;
    std::cout << "ptr : " << *ptr << std::endl;
    std::cout << "ref : " << ref << std::endl;
    std::cout << "----------------------" << std::endl;
    
    return (0);
}