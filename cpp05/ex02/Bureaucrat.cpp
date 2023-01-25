/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 01:11:38 by soo               #+#    #+#             */
/*   Updated: 2023/01/25 22:03:20 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
	:_name("unKnown"), _grade(1)
{
	std::cout << "Bureaucrat Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) 
	:_name(name), _grade(grade)
{
	if (_grade < 1)
		throw GradeTooHighException();
	else if (_grade > 150)
		throw GradeTooLowException();
	std::cout << "Bureaucrat Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
	*this = obj;
	std::cout << "Bureaucrat Copy Constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &obj)
{
	if (this != &obj)
	{
		const_cast<std::string&>(_name) = obj._name;
		_grade = obj._grade;
	}
	std::cout << "Bureaucrat Copy Assign Constructor called" << std::endl;
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
		throw GradeTooLowException();
	_grade += n;
}

void	Bureaucrat::increaseGrade(int n)
{
	if (_grade - n < 1)
			throw GradeTooHighException();
	_grade -= n;
}


const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high");
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low");
}

void Bureaucrat::signForm(Form &obj)
{
	try
	{
		obj.beSigned((*this));
		std::cout << _name << " signed " << obj.getName() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << _name << " couldn't sign " << obj.getName() << " because " <<
		e.what() << "." << std::endl;
	}
}

void Bureacrat::executeForm(Form const &form)
{
	try
	{
		form.execute(*this);
		std::cout << _name << " executed " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << _name " can not execute " << form.getName() << " because " << e.what() << std::endl;
	}
}

std::ostream& operator<<(std::ostream& out, Bureaucrat const &obj)
{
	out << obj.getName() << ", bureacrat grade " << obj.getGrade() << "." << std::endl;
	return (out);
}
