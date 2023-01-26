/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:22:13 by soo               #+#    #+#             */
/*   Updated: 2023/01/26 18:58:02 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
    :_name("form unKnown"), _signGrade(1), _execGrade(1), _isSigned(false) 
{
    std::cout << "Form Constructor called" << std::endl;
}

Form::Form(std::string name, int signGrade, int execGrade)
    :_name(name), _signGrade(signGrade), _execGrade(execGrade), _isSigned(false)
{
    if (_signGrade < 1 ||  _execGrade < 1)
        throw GradeTooHighException();
    else if (_signGrade > 150 ||  _execGrade > 150)
        throw GradeTooLowException();
    std::cout << "Form Constructor called" << std::endl;
}

Form::Form(const Form& obj)
:_name(obj._name), _signGrade(obj._signGrade), _execGrade(obj._execGrade), _isSigned(false)
{
    *this = obj;
    std::cout << "Form Copy Constructor called" << std::endl;
}

Form::~Form()
{
    	std::cout << "Form Destructor called" << std::endl;
}

Form& Form::operator=(const Form& obj)
{
    if (this != &obj)
    {
        const_cast<std::string&>(_name) = obj._name;
        const_cast<int&>(_signGrade) = obj._signGrade;
        const_cast<int&>(_execGrade) = obj._execGrade;
        _isSigned = obj._isSigned;
    }
    std::cout << "Form Copy Assign Constructor called" << std::endl;
	return (*this);
}

std::string Form::getName(void) const
{
    return _name;
}

int Form::getSignGrade(void) const
{
    return _signGrade;
}

int Form::getExecGrade(void) const
{
    return _execGrade;
}

bool Form::getIsSigned(void) const
{
    return _isSigned;
}

void Form::beSigned(Bureaucrat &obj)
{
    if (obj.getGrade() <= _signGrade)
        _isSigned = true;
    else
        throw GradeTooLowException();
}


const char *Form::GradeTooHighException::what(void) const throw()
{
    return "Form Grade too High";
}

const char *Form::GradeTooLowException::what(void) const throw()
{
    return "Form Grade too Low";
}

const char *Form::DoesNotSignedException::what(void) const throw()
{
    return "Form Dose Not Signed";
}

const char *Form::DoesNotCreateFileException::what(void) const throw()
{
    return "Form Dose Not Create File";
}

void	Form::executable(Bureaucrat const &obj) const
{
	if (!_isSigned)
		throw DoesNotSignedException();
	else if (_execGrade < obj.getGrade())
		throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream &out, Form const &obj)
{
    out << "Name : " << obj.getName() << std::endl;
    out << "Sign Grade : " << obj.getSignGrade() << std::endl;
    out << "Execute Grade : " << obj.getExecGrade() << std::endl;
    out << "Is Signed : " << std::boolalpha << obj.getIsSigned() << std::endl;
    return (out);
}