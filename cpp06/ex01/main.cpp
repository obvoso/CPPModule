/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:43:11 by soo               #+#    #+#             */
/*   Updated: 2023/01/31 17:54:09 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

uintptr_t serialize(Data *p)
{ 
	return (reinterpret_cast<uintptr_t>(p));
}

Data *deserialize(uintptr_t ip)
{
	return (reinterpret_cast<Data *>(ip));
}

int main(void)
{
	Data	ptr;

	ptr._int = 42;
	ptr._c = 'x';

	std::cout << "origin" << std::endl;
	std::cout << &ptr << std::endl;
	std::cout << ptr._int << std::endl;
	std::cout << ptr._c << std::endl << std::endl;

	std::cout << "serialize" << std::endl;
	uintptr_t ip = serialize(&ptr);
	std::cout << ip << std::endl << std::endl;

	std::cout << "deserialize" << std::endl;
	Data *de = deserialize(ip);
	std::cout << de << std::endl;
	std::cout << de->_int << std::endl;
	std::cout << de->_c << std::endl;
}