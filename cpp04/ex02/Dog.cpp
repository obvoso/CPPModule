/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:56:25 by soo               #+#    #+#             */
/*   Updated: 2023/01/18 20:49:37 by soo              ###   ########.fr       */
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
		_brain = new Brain(*(obj._brain));
    }
    return (*this);
}

Dog& Dog::operator=(const Brain& obj) 
{
    if (this->_brain != &obj)
		_brain = new Brain(obj);
    return (*this);
}

std::string Dog::getBrain(int i) const
{
	return (_brain->getIdea(i));
}

void Dog::setBrain(std::string idea, int i)
{
    _brain->setIdea(idea, i);
}

void Dog::makeSound(void)const {
    std::cout << "Dog say bark bark" << std::endl;
}