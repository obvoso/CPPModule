/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 22:10:52 by soo               #+#    #+#             */
/*   Updated: 2023/01/25 22:11:57 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
 public:
     ShrubberyCreationForm();
     ShrubberyCreationForm(const ShrubberyCreationForm& obj);
     ShrubberyCreationForm& operator=(const ShrubberyCreationForm& obj);
     ~ShrubberyCreationForm();
     void execute(Bureaucrat const &executer) const;
};

#endif
