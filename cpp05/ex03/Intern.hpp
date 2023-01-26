/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 20:23:31 by soo               #+#    #+#             */
/*   Updated: 2023/01/26 23:38:50 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class PresidentialPardonForm;
class RobotomyRequestForm;
class ShrubberyCreationForm;

class Intern {
 public:
	Intern();
	Intern(const Intern& obj);
	~Intern();
	Intern& operator=(const Intern& obj);
	Form *makeForm(const std::string &name, const std::string &target);
	
	Form *newShrubbery(const std::string &target);
	Form *newRobotomy(const std::string &target);
	Form *newPresident(const std::string &target);

	class NoTypeExeption : public std::exception
	{
		public :
			const char *what(void) const throw();
	};
};


#endif
