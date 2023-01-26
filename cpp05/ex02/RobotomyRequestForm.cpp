/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 18:26:54 by soo               #+#    #+#             */
/*   Updated: 2023/01/26 19:41:11 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
	: Form("RobotomyRequestForm", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: Form(target, 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj)
{
	*this = obj;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj)
{
	(void) obj;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executer) const
{
	executable(executer);

	std::cout << "Drrrrrr" << std::endl;
	std::srand(std::time(NULL));
	if (std::rand() % 2)
		std::cout << executer.getName() << " has been robotomized successfully" << std::endl;
	else
	 	std::cout << executer.getName() << " the robotomy failed" << std::endl;
}