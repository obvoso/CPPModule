/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:14:00 by soo               #+#    #+#             */
/*   Updated: 2022/11/19 17:03:14 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie stackZombie = Zombie("Stack");
	Zombie *heapZombie = new Zombie("Heap");

	stackZombie.announce();
	heapZombie->announce();

	randomChump("chumpZombie");
	delete heapZombie;
	return (0);
}