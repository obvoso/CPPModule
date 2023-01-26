/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 02:24:54 by soo               #+#    #+#             */
/*   Updated: 2023/01/26 19:47:44 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void) {
	Bureaucrat	b1("Boss", 1);
	Bureaucrat	b2("soo", 15);
	Bureaucrat	b3("bal", 70);
	Bureaucrat	b4("zzang", 140);

	std::cout << std::endl;

	Form *f1 = new PresidentialPardonForm("Presidential");
	Form *f2 = new RobotomyRequestForm("Roboto");
	ShrubberyCreationForm	f3("Shrubbery");

	std::cout << std::endl;

	std::cout << b1 << std::endl << b2 << std::endl << b3 << std::endl << b4 << std::endl;

	std::cout << std::endl;

	std::cout << *f1 << std::endl << *f2 << std::endl << f3 << std::endl;

	b2.signForm(*f1);
	b3.signForm(*f2);
	b4.signForm(f3);

	std::cout << std::endl;

	b2.executeForm(*f1);
	b3.executeForm(*f2);
	b4.executeForm(f3);

	std::cout << std::endl;

	b1.executeForm(*f1);
	b1.executeForm(*f2);
	b1.executeForm(f3);

	std::cout << std::endl;

	delete f2;
	delete f1;
	
	return 0;
}