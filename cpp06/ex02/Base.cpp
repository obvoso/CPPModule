/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 18:16:02 by soo               #+#    #+#             */
/*   Updated: 2023/02/01 13:07:17 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base() {}

Base *generate(void)
{
	int num;

	srand(time(NULL));
	num = rand() % 3;
	
	switch(num)
	{
		case 0 : return (new A);
		case 1 : return (new B);
		default : return (new C);
	}
	return (NULL);
}

void identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void identify(Base &p)
{
	Base cast;
	try
	{
		cast = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	}
	catch(std::exception &e) {}
	try
	{
		cast = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
	}
	catch(std::exception &e) {}
	try
	{
		cast = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
	}
	catch(std::exception &e) {}
}

