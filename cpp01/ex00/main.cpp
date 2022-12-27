/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:14:00 by soo               #+#    #+#             */
/*   Updated: 2022/12/27 17:21:42 by soo              ###   ########.fr       */
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
	Zombie* newHeapZombie = newZombie("newHeapZombie");
	newHeapZombie->announce();
	delete newHeapZombie;
	delete heapZombie;
	return (0);
}