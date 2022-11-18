/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:14:00 by soo               #+#    #+#             */
/*   Updated: 2022/11/18 13:17:12 by soo              ###   ########.fr       */
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