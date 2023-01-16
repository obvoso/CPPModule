/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:45:38 by soo               #+#    #+#             */
/*   Updated: 2023/01/16 21:35:22 by soo              ###   ########.fr       */
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
    std::string *getBrains(void) const;
    void setBrains(std::string idea, int i);
};

#endif
