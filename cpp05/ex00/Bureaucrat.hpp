/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 01:08:00 by soo               #+#    #+#             */
/*   Updated: 2023/01/25 02:24:37 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

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