/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:42:47 by soo               #+#    #+#             */
/*   Updated: 2023/01/18 21:04:31 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal* j = new Dog();
	std::cout << std::endl;
	const Animal* i = new Cat();
	std::cout << std::endl;

	delete j;
	std::cout << std::endl;
	delete i;
	std::cout << std::endl;
	std::cout << std::endl;

	Animal	*a[4];

	for(int i = 0; i < 4; i++) {
		if (i < 2) {
			a[i] = new Cat();
		}
		else {
			a[i] = new Dog();
		}
	}
	for(int i=0; i<4; i++) {
		a[i]->makeSound();
	}
	
	for(int i = 0; i < 4; i++) {
		delete a[i];
	}

//////////////////////////////////////////////

	WrongAnimal		*p = new WrongCat[4];

	std::cout << std::endl;

	for (int i = 0; i < 4; i++) {
		p[i].makeSound();
	}

	std::cout << std::endl;

	delete[] p;
	
	std::cout << std::endl;

	//////////////////////////////////////////////
	
	Brain brain;
	Cat cat(brain);
	Dog dog(brain);
	Cat cat2(cat);

	brain.setIdea("brain", 99);
	cat.setBrain("cat", 99);
	cat2.setBrain("cat2", 99);
	dog.setBrain("dog", 99);
	

	std::cout << brain.getIdea(99) << std::endl;
	std::cout << cat.getBrain(99) << std::endl;
	std::cout << cat2.getBrain(99) << std::endl;
	std::cout << dog.getBrain(99) << std::endl;

	return (0);
}