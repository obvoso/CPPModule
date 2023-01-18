/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:46:30 by soo               #+#    #+#             */
/*   Updated: 2023/01/18 20:48:52 by soo              ###   ########.fr       */
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
    delete _brain;
    std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& obj) 
{
    if (this != &obj)
    {
        _type = obj._type;
		_brain = new Brain(*(obj._brain));
    }
    return (*this);
}

Cat& Cat::operator=(const Brain& obj) 
{
    if (this->_brain != &obj)
		_brain = new Brain(obj);
    return (*this);
}

std::string Cat::getBrain(int i) const
{
	return (_brain->getIdea(i));
}

void Cat::setBrain(std::string idea, int i)
{
    _brain->setIdea(idea, i);
}

void Cat::makeSound(void)const {
    std::cout << "Cat say meow meow" << std::endl;
}