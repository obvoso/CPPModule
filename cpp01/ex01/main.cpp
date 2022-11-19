/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 16:59:02 by soo               #+#    #+#             */
/*   Updated: 2022/11/19 17:26:55 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie* zombieArr = zombieHorde(4, "kiki");

    for(int i = 0; i < 4; i++)
        zombieArr[i].announce();
    delete[] zombieArr;
    return 0;
}