/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:45:38 by soo               #+#    #+#             */
/*   Updated: 2023/01/16 16:50:08 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{
 public:
     Cat();
     Cat(const Cat& obj);
     Cat& operator=(const Cat& obj);
     ~Cat();
     void makeSound(void) const;
};

#endif
