/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 20:28:25 by soo               #+#    #+#             */
/*   Updated: 2023/01/26 23:39:03 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern& obj)
{
	*this = obj;
}

Intern::~Intern()
{
}

Intern& Intern::operator=(const Intern& obj)
{
	(void)obj;
	return *this;
}

Form *Intern::makeForm(const std::string &name, const std::string &target)
{
	std::string nameArr[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form* (Intern::*fp[3])(const std::string&) = {&Intern::newShrubbery, &Intern::newRobotomy, &Intern::newPresident};
	try {
		for(int i = 0; i < 3; i++)
		{
			if (!nameArr[i].compare(name))
			{
				std::cout << "Intern creates " << name << std::endl;
				return ((this->*fp[i])(target));
			}
		}
		throw NoTypeExeption();
	}
	catch (std::exception &e){
		std::cout << "Intern cannot create " << name << " because " << 
		e.what() << std::endl;
		return (nullptr);
	}
}

Form *Intern::newShrubbery(const std::string &target)
{
	return new ShrubberyCreationForm(target);
}

Form *Intern::newRobotomy(const std::string &target)
{
	return new RobotomyRequestForm(target);
}

Form *Intern::newPresident(const std::string &target)
{
	return new PresidentialPardonForm(target);
}

const char *Intern::NoTypeExeption::what(void) const throw ()
{
	return ("Form name does not exitst");
}
