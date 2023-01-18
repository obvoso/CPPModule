/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:42:26 by soo               #+#    #+#             */
/*   Updated: 2023/01/16 20:44:36 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
    :_type("WrongAnimal") 
{
    std::cout << "Wrong Animal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
    :_type(type) 
{
    std::cout << "Wrong Animal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj) 
{
    *this = obj;
}

WrongAnimal::~WrongAnimal() 
{
    std::cout << "Wrong Animal Destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj) 
{
    if (this != &obj)
        _type = obj._type;
    return (*this);
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal does not bark... This message is wrong..." << std::endl;
}