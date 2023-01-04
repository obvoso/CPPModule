/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 20:58:55 by soo               #+#    #+#             */
/*   Updated: 2023/01/04 21:44:10 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap soo("soo");
    DiamondTrap bal("bal");
    std::cout << std::endl;

    soo.printStat();
    bal.printStat();
    std::cout << std::endl;
    
    soo.attack("bal");
    bal.takeDamage(soo.getAttackDamage());
    soo.attack("bal");
    bal.takeDamage(20);
    bal.attack("soo");
    soo.takeDamage(bal.getAttackDamage());

    std::cout << std::endl;
    soo.guardGate();
    soo.highFiveGuys();
    soo.whoAmI();
    std::cout << std::endl;

    bal.beRepaired(10);
    soo.beRepaired(100);

    std::cout << std::endl;
    bal.guardGate();
    bal.highFiveGuys();
    bal.whoAmI();
    std::cout << std::endl;
    return (0);
}