/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 20:13:12 by soo               #+#    #+#             */
/*   Updated: 2023/01/03 21:42:33 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
    : _name("anonymous"), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << _name << " Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
    : _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << _name << " Constructor overload called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj) 
{
    std::cout << "ClapTrap " << _name << " Copy constructor called" << std::endl;
    *this = obj;
}

ClapTrap::~ClapTrap() 
{
    std::cout << "ClapTrap " << _name << " Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj) 
{
    std::cout << "ClapTrap " << _name << " Copy assignment operator called" << std::endl;
    if(this != &obj)
    {
        _name = obj._name;
        _hitPoint = obj._hitPoint;
        _energyPoint = obj._energyPoint;
        _attackDamage = obj._attackDamage;
    }
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (_energyPoint == 0 || _hitPoint == 0)
        std::cout << "ClapTrap " << _name << " has no points." << std::endl;
    else
    {
        _energyPoint--;
        std::cout << "ClapTrap " << _name << " attacks " <<  target << ", causing " << _attackDamage <<  " points of damage!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoint == 0)
        std::cout << "ClapTrap " << _name << "is already dead." << std::endl;
    else
    {
        if (_hitPoint <= amount)
            _hitPoint = 0;
        else
            _hitPoint -= amount;
        std::cout << "ClapTrap " << _name << " takes damage, has " << _hitPoint << " points left." << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hitPoint == 0)
        std::cout << "ClapTrap " << _name << " is already dead." << std::endl;
    else if (_energyPoint == 0)
        std::cout << "ClapTrap " << _name << " has no point." << std::endl;
    else if (_hitPoint == 10)
            std::cout << "ClapTrap " << _name << " is already full." << std::endl;
    else
    {
        if (_hitPoint + amount > 10)
            _hitPoint = 10; 
        else if (amount > 10)
            amount = 10;
        else
            _hitPoint += amount;
        _energyPoint--;
        std::cout << "ClapTrap " << _name << " repaires, has " << _hitPoint << " points left." << std::endl;
    }
}

unsigned int ClapTrap::getAttackDamage()
{
    return _attackDamage;
}