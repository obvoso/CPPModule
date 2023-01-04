/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 20:58:55 by soo               #+#    #+#             */
/*   Updated: 2023/01/04 15:34:54 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    FragTrap soo("soo");
    FragTrap bal("bal");
    std::cout << std::endl;

    soo.attack("bal");
    bal.takeDamage(soo.getAttackDamage());
    soo.attack("bal");
    bal.takeDamage(20);
    bal.attack("soo");
    soo.takeDamage(bal.getAttackDamage());
    soo.highFiveGuys();
    bal.beRepaired(10);
    soo.beRepaired(100);
    bal.highFiveGuys();
    std::cout << std::endl;
    return (0);
}