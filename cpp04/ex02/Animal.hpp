/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:23:09 by soo               #+#    #+#             */
/*   Updated: 2023/01/18 21:12:14 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>


class Animal
{
 protected:
     std::string _type;
 public:
	Animal();
	Animal(std::string type);
	Animal(const Animal& obj);
	Animal& operator=(const Animal& obj);
    virtual ~Animal();
    virtual void makeSound(void) const = 0;
};

#endif
