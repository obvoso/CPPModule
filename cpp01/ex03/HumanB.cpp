/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 21:44:37 by soo               #+#    #+#             */
/*   Updated: 2022/11/19 22:51:52 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
    weapon = NULL;
}

HumanB::~HumanB(void) {}

void    HumanB::setName(std::string name)
{
    this->name = name;
}

std::string HumanB::getName(void)
{
    return name;
}

void    HumanB::attack(void)
{
    if (!weapon)
        std::cout<< getName() << "hasn't the weapon" << std::endl;
    else
        std::cout << getName() << " attacks with their " << weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}
