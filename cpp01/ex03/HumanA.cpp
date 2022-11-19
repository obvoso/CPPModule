/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 20:57:02 by soo               #+#    #+#             */
/*   Updated: 2022/11/19 22:50:52 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
    this->name = name;
}

HumanA::~HumanA(void) {}

void    HumanA::setName(std::string name)
{
    this->name = name;
}

std::string HumanA::getName(void)
{
    return name;
}

void    HumanA::attack(void)
{
    std::cout << getName() << " attacks with their " << weapon.getType() << std::endl;
}