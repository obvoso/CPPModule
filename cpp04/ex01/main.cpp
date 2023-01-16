/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:42:47 by soo               #+#    #+#             */
/*   Updated: 2023/01/16 21:38:54 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main(void)
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;

	 	Animal	*a[4];

	for(int i=0; i<4; i++) {
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
	
	for(int i=0; i<4; i++) {
		delete a[i];
	}
	
	Brain brain;
	Cat cat(brain);
	Dog dog(brain);

	brain.setIdeas("brain", 100);
	cat.setBrains("cat", 100);
	dog.setBrains("dog", 100);

	std::cout << brain.getIdeas() << std::endl;
	std::cout << cat.getBrains() << std::endl;
	std::cout << dog.getBrains() << std::endl;
    
	return (0);
}