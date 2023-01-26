/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 02:24:54 by soo               #+#    #+#             */
/*   Updated: 2023/01/26 23:39:33 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int	main(void) {
	Intern i;
	Bureaucrat b1("Boss", 1);
	Bureaucrat b2("soo", 15);
	Bureaucrat b3("bal", 70);
	Bureaucrat b4("zzang", 140);

	std::cout << std::endl;

	Form* f1 = i.makeForm("presidential pardon", "Presidential");
	Form* f2 = i.makeForm("robotomy request", "Robotomy");
	Form* f3 = i.makeForm("shrubbery creation", "Shrubbery");
	i.makeForm("Wrong Form Name", "Wrong");
	if (!f1 || !f2 || !f3)
	  return (0);
	std::cout << std::endl;

	std::cout << b1 << std::endl << b2 << std::endl << b3 << std::endl << b4 << std::endl;

	std::cout << std::endl;

	std::cout << *f1 << std::endl << *f2 << std::endl << *f3 << std::endl;

	b2.signForm(*f1);
	b3.signForm(*f2);
	b4.signForm(*f3);

	std::cout << std::endl;

	b2.executeForm(*f1);
	b3.executeForm(*f2);
	b4.executeForm(*f3);

	std::cout << std::endl;

	b1.executeForm(*f1);
	b1.executeForm(*f2);
	b1.executeForm(*f3);

	delete f3;
	delete f2;
	delete f1;
	return 0;
}