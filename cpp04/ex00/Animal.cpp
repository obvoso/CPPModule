/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:24:39 by soo               #+#    #+#             */
/*   Updated: 2023/01/16 18:00:04 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
    :_type("Animal") 
{
    std::cout << "Default constructor called" << std::endl;
}

Animal::Animal(std::string type)
    :_type(type)
{
    std::cout << "Constructor called" << std::endl;
}

Animal::Animal(const Animal& obj) 
{
    *this = obj;
}

Animal::~Animal() 
{
    std::cout << "Destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& obj) 
{
    if (this != &obj)
        _type = obj._type;
    return (*this);
}

void Animal::makeSound(void) const
{
    std::cout << "Animal does not bark... This message is wrong..." << std::endl;
}