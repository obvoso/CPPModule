/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:56:25 by soo               #+#    #+#             */
/*   Updated: 2023/01/16 21:41:02 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() 
    : Animal("Dog")
{
    _brain = new Brain();
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& obj) 
{
    *this = obj;
}

Dog::Dog(const Brain& obj) 
{
    *this = obj;
}

Dog::~Dog() 
{
    delete _brain;
    std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& obj) 
{
    if (this != &obj)
    {
        _type = obj._type;
        for(int i = 0; i < 100; i++)
            _brain[i] = obj._brain[i];
    }
    return (*this);
}

Dog& Dog::operator=(const Brain& obj) 
{
    if (this->_brain != &obj)
    {
        for(int i = 0; i < 100; i++)
            _brain[i] = obj._ideas[i];
    }
    return (*this);
}

std::string* Dog::getBrains(void) const
{
    return (_brain);
}

std::string Dog::getBrain(int i) const
{
    return (_brain[i]);
}

void Dog::setBrain(std::string idea, int i)
{
    _brain[i] = brain;
}

void Dog::makeSound(void) const
{
    std::cout << "Dog say bark bark" << std::endl;
}