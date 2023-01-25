/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 01:08:00 by soo               #+#    #+#             */
/*   Updated: 2023/01/25 22:03:26 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat {
 private:
	const std::string _name;
	int _grade;
	
 public:
	Bureaucrat(void);
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &obj);
	~Bureaucrat();
	Bureaucrat& operator=(const Bureaucrat &obj);

	std::string getName(void) const;
	int	getGrade(void) const;
	void	increaseGrade(int n);
	void	decreaseGrade(int n);

	void signForm(Form &obj);
	void executeForm(Form const &form);

	class GradeTooHighException : public std::exception
	{
		public:
			const char *what(void) const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			 const char *what(void) const throw();
	};
};
std::ostream& operator<<(std::ostream& out, Bureaucrat const &obj);


# endif