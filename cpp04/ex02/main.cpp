/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:42:47 by soo               #+#    #+#             */
/*   Updated: 2023/01/19 14:14:34 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	const Animal* j = new Dog();
	std::cout << std::endl;
	const Animal* i = new Cat();
	std::cout << std::endl;
	const Dog* dog = new Dog();
	std::cout << std::endl;
	const Cat* cat = new Cat();
	std::cout << std::endl;

	std::cout << std::endl;
	j->makeSound();
	i->makeSound();
	dog->makeSound();
	cat->makeSound();
	std::cout << std::endl;
	
	delete j;
	delete i;
    delete dog;
	delete cat;
	return (0);
}