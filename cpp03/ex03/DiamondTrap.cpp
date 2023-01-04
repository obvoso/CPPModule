/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 15:58:52 by soo               #+#    #+#             */
/*   Updated: 2023/01/04 17:03:08 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
    :ClapTrap(), ScavTrap(), FragTrap(), _name(ClapTrap::getName())
{
    ClapTrap::setName(ClapTrap::getName() + "_clap_name");
    ClapTrap::setEnergyPoint(50);
    std::cout << "DiamondTrap " << _name << " Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
    :ClapTrap(name), ScavTrap(name),  FragTrap(name), _name(ClapTrap::getName())
{
    ClapTrap::setName(name + "_clap_name");
    ClapTrap::setEnergyPoint(50);
    std::cout << "DiamondTrap " << _name << " Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj)
{
    *this = obj;
    std::cout << "DiamondTrap " << _name << " Copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << _name << " Destructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& obj)
{
    if (this != &obj)
    {
        _name = obj._name;
        ScavTrap::operator=(obj);
        FragTrap::operator=(obj);
    }
    std::cout << "DiamondTrap " << _name << " Copy assignment operator called" << std::endl;
    return (*this);
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "DiamondTrap " << _name << " ClapTrap " << ClapTrap::getName() << std::endl;
}

void DiamondTrap::printStat(void)
{
    std::cout << _name << std::endl;
    std::cout << getName() << std::endl;
    std::cout << getHitPoint() << std::endl;
    std::cout << getEnergyPoint() << std::endl;
    std::cout << getAttackDamage() << std::endl;
}