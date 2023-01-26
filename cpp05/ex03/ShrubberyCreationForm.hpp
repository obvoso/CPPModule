/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 22:10:52 by soo               #+#    #+#             */
/*   Updated: 2023/01/26 18:56:26 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
 public:
     ShrubberyCreationForm();
     ShrubberyCreationForm(std::string target);
     ShrubberyCreationForm(const ShrubberyCreationForm& obj);
     ShrubberyCreationForm& operator=(const ShrubberyCreationForm& obj);
     ~ShrubberyCreationForm();
	 
     void execute(Bureaucrat const &executer) const;
};

#endif
