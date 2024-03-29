/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:55:36 by soo               #+#    #+#             */
/*   Updated: 2023/01/18 20:41:24 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
 private:
     Brain *_brain;
 public:
    Dog();
    Dog(const Dog& obj);
    Dog(const Brain& obj);
    Dog& operator=(const Dog& obj);
    Dog& operator=(const Brain& obj);
    ~Dog();
    void makeSound(void) const;
    std::string getBrain(int i) const;
    void setBrain(std::string idea, int i);
};

#endif
