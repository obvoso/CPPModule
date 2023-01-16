/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:46:30 by soo               #+#    #+#             */
/*   Updated: 2023/01/16 21:37:06 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() 
    : Animal("Cat")
{
    _brain = new Brain();
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& obj) 
{
    *this = obj;
}

Cat::Cat(const Brain& obj) 
{
    *this = obj;
}

Cat::~Cat() 
{
    std::cout << "Cat destructor called" << std::endl;
    delete _brain;
}

Cat& Cat::operator=(const Cat& obj) 
{
    if (this != &obj)
    {
        _type = obj._type;
        for(int i = 0; i < 100; i++)
            _brain[i] = obj._brain[i];
    }
    return (*this);
}

Cat& Cat::operator=(const Brain& obj) 
{
    if (this->_brain != &obj)
    {
        for(int i = 0; i < 100; i++)
            _brain[i] = obj._ideas[i];
    }
    return (*this);
}

std::string* Cat::getBrains(void) const
{
    return (_brain);
}
void Cat::setBrains(std::string idea, int i)
{
    _brain[i] = brain;
}

void Cat::makeSound(void)const {
    std::cout << "Cat say meow meow" << std::endl;
}