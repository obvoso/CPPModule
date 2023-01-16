/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:46:30 by soo               #+#    #+#             */
/*   Updated: 2023/01/16 17:58:30 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() 
    : Animal("Cat")
{
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& obj) 
{
    *this = obj;
}

Cat::~Cat() 
{
    std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& obj) 
{
    if (this != &obj)
        _type = obj._type;
    return (*this);
}

void Cat::makeSound(void)const {
    std::cout << "Cat say meow meow" << std::endl;
}