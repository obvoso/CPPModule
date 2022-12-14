/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 20:58:55 by soo               #+#    #+#             */
/*   Updated: 2023/01/04 21:44:25 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap soo("soo");
    ClapTrap bal("bal");
    std::cout << std::endl;
    
    soo.attack("bal");
    bal.takeDamage(soo.getAttackDamage());
    soo.attack("bal");
    bal.takeDamage(2);
    bal.attack("soo");
    soo.takeDamage(9);
    bal.beRepaired(10);
    bal.beRepaired(10);
    soo.beRepaired(1);
    soo.beRepaired(11);
    bal.attack("soo");
    soo.takeDamage(12);
    soo.beRepaired(1);
    
    std::cout << std::endl;
    return (0);
}