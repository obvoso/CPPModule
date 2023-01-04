/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:49:22 by soo               #+#    #+#             */
/*   Updated: 2023/01/04 15:12:39 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    setName("anonymous");
    setHitPoint(100);
    setEnergyPoint(50);
    setAttackDamage(20);
    std::cout << "ScavTrap " << getName() << " Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) 
{
    setName(name);
    setHitPoint(100);
    setEnergyPoint(50);
    setAttackDamage(20);
    std::cout << "ScavTrap " << getName() << " Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& obj) 
{
    *this = obj;
     std::cout << "ScavTrap " << getName() << " Copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap() 
{
    std::cout << "ScavTrap " << getName() << " Destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj) 
{
    if(this != &obj)
        ClapTrap::operator=(obj);
    std::cout << "ScavTrap " << getName() << " Copy assignment operator called" << std::endl;
    return (*this);
}

void ScavTrap::attack(const std::string& target)
{
    if (!getEnergyPoint() || !getHitPoint())
        std::cout << "ScavTrap " << getName() << " has no points." << std::endl;
    else
    {
        setEnergyPoint(getEnergyPoint() - 1);
        std::cout << "ScavTrap " << getName() << " attacks " <<  target << ", causing " << getAttackDamage() <<  " points of damage!" << std::endl;
    }
}

void ScavTrap::guardGate(void)
{
    if (!getEnergyPoint() || !getHitPoint())
        std::cout << "ScavTrap " << getName() << " has no points." << std::endl;
    else
    {
        setEnergyPoint(getEnergyPoint() - 1);
        std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode." << std::endl; 
    }
}
