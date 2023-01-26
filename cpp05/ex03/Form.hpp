/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:46:19 by soo               #+#    #+#             */
/*   Updated: 2023/01/26 18:57:52 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
 private:
     const std::string _name;
     const int _signGrade;
     const int _execGrade;
     bool _isSigned;
     
 public:
     Form();
     Form(std::string name, int signGrade, int execGrade);
     Form(const Form& obj);
     Form& operator=(const Form& obj);
     virtual ~Form();

     std::string getName(void) const;
     int getSignGrade(void) const;
     int getExecGrade(void) const;
     bool getIsSigned(void) const;
     
     void beSigned(Bureaucrat &obj);
	 void executable(Bureaucrat const &obj) const;
     virtual void execute(Bureaucrat const &executer) const = 0;

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

	 class DoesNotSignedException : public std::exception
	 {
		public:
			const char *what(void) const throw();
	 };

	 class DoesNotCreateFileException : public std::exception
	 {
		public:
			const char *what(void) const throw();
	 };
};
std::ostream& operator<<(std::ostream &out, Form const &obj);

#endif
