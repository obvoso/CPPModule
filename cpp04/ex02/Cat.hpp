/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:45:38 by soo               #+#    #+#             */
/*   Updated: 2023/01/18 20:04:03 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
private:
    Brain *_brain;
public:
    Cat();
    Cat(const Cat& obj);
    Cat(const Brain& obj);
    Cat& operator=(const Cat& obj);
    Cat& operator=(const Brain& obj);
    ~Cat();
    void makeSound(void) const;
    std::string getBrain(int i) const;
    void setBrain(std::string idea, int i);
};

#endif
