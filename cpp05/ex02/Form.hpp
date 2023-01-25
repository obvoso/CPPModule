/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:46:19 by soo               #+#    #+#             */
/*   Updated: 2023/01/25 22:18:24 by soo              ###   ########.fr       */
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

     void setName(std::string name);
     void setSignGrade(int n);
     void setExecGrade(int n);
     
     void beSigned(Bureaucrat &obj);
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
};
std::ostream& operator<<(std::ostream &out, Form const &obj);

#endif
