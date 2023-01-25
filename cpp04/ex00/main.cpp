/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:42:47 by soo               #+#    #+#             */
/*   Updated: 2023/01/19 14:12:43 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	std::cout << std::endl;
	const Animal* j = new Dog();
	std::cout << std::endl;
	const Animal* i = new Cat();
	std::cout << std::endl;
	const WrongAnimal* wrongCat = new WrongAnimal();
	std::cout << std::endl;
	const WrongAnimal* wrong = new WrongCat();
	std::cout << std::endl;

	std::cout << std::endl;
	j->makeSound();
	i->makeSound();
	meta->makeSound();
	std::cout << std::endl;
	
	wrongCat->makeSound();
	wrong->makeSound();
	std::cout << std::endl;
    
	delete meta;
	delete j;
	delete i;
	delete wrong;
	delete wrongCat;

	return (0);
}