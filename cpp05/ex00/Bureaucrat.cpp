/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 01:11:38 by soo               #+#    #+#             */
/*   Updated: 2023/01/25 02:33:01 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
	:_name("unKnown"), _grade(1)
{
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
	*this = obj;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &obj)
{
	if (this != &obj)
	{
		const_cast<std::string&>(_name) = obj._name;
		_grade = obj._grade;
	}
	return (*this);
}

std::string Bureaucrat::getName(void) const
{
	return _name;
}

int	Bureaucrat::getGrade(void) const
{
	return _grade;
}

void	Bureaucrat::decreaseGrade(int n)
{
	if (_grade + n > 150)
		throw GradeTooHighException();
	_grade += n;
}

void	Bureaucrat::increaseGrade(int n)
{
	if (_grade - n < 1)
			throw GradeTooLowException();
	_grade -= n;
}

Bureaucrat::Bureaucrat(std::string name, int grade) 
	:_name(name)
{
	_grade = grade;
	if (_grade < 1)
		throw GradeTooLowException();
	else if (_grade > 150)
		throw GradeTooHighException();
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high");
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low");
}

std::ostream& operator<<(std::ostream& out, Bureaucrat const &obj)
{
	out << obj.getName() << ", bureacrat grade " << obj.getGrade() << "." << std::endl;
	return (out);
}
