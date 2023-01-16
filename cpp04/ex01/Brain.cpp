/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 20:59:33 by soo               #+#    #+#             */
/*   Updated: 2023/01/16 21:40:18 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain& obj)
{
    *this = obj;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& obj)
{
    if (this != &obj)
    {
        for(int i = 0; i < 100; i++)
            _ideas[i] = obj._ideas[i];
    }
    return (*this);
}

std::string* Brain::getIdeas(void) const
{
    return (_ideas);
}

std::string Brain::getIdea(int i) const
{
    return (_ideas[i]);
}

void Brain::setIdea(std::string idea, int i)
{
    _ideas[i] = idea;
}


