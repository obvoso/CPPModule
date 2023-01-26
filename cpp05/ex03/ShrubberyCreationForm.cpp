/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 22:12:18 by soo               #+#    #+#             */
/*   Updated: 2023/01/26 18:52:37 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm()
	: Form("ShrubberyCreationForm", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: Form(target, 145, 137)
{
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
	(void) obj;
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executer) const
{
    executable(executer);
	
	std::string fileName = executer.getName().append("_shrubbery");
	std::ofstream outFile;
	std::string shrubbery = "               ,@@@@@@@,\n"
							"       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
							"    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
							"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
							"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
							"   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
							"   `&%\\ ` /%&'    |.|        \\ '|8'\n"
							"       |o|        | |         | |\n"
							"       |.|        | |         | |\n"
							"    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_";

	outFile.open(fileName);
	if (outFile.fail())
		throw DoesNotCreateFileException();
	outFile << shrubbery;
	outFile.close();
}