/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:49:22 by soo               #+#    #+#             */
/*   Updated: 2023/01/04 17:05:53 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    setName("anonymous");
    setHitPoint(100);
    setEnergyPoint(100);
    setAttackDamage(30);
    std::cout << "FragTrap " << getName() << " Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) 
{
    setName(name);
    setHitPoint(100);
    setEnergyPoint(100);
    setAttackDamage(30);
    std::cout << "FragTrap " << getName() << " Default constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& obj) 
{
    *this = obj;
     std::cout << "FragTrap " << getName() << " Copy constructor called" << std::endl;
}

FragTrap::~FragTrap() 
{
    std::cout << "FragTrap " << getName() << " Destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& obj) 
{
    if(this != &obj)
        ClapTrap::operator=(obj);
    std::cout << "FragTrap " << getName() << " Copy assignment operator called" << std::endl;
    return (*this);
}

void FragTrap::highFiveGuys(void)
{
    if (!getEnergyPoint() || !getHitPoint())
        std::cout << "FragTrap " << getName() << " has no points." << std::endl;
    else
        std::cout << "FragTrap " << getName() << " HighFive!!" << std::endl;
}
