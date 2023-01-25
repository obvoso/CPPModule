/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 22:12:18 by soo               #+#    #+#             */
/*   Updated: 2023/01/25 22:23:22 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
    _name = setName("ShrubberyCreationForm");
    _signGrade = setSignGrade(145);
    _ExecGrade = setExecGrade(137);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj)
{
    *this = obj;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj)
{
    if (this != &obj)
    {
        const_cast<std::string&>(_name) = obj._name;
        const_cast<int&>(_signGrade) = obj._signGrade;
        const_cast<int&>(_execGrade) = obj._execGrade;
        _isSigned = obj._isSigned;
    }
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executer) const
{
    
}