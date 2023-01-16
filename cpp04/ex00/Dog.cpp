/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:56:25 by soo               #+#    #+#             */
/*   Updated: 2023/01/16 17:57:02 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() 
    : Animal("Dog")
{
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& obj) 
{
    *this = obj;
}

Dog::~Dog() 
{
    std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& obj) 
{
    if (this != &obj)
        _type = obj._type;
    return (*this);
}

void Dog::makeSound(void) const
{
    std::cout << "Dog say bark bark" << std::endl;
}