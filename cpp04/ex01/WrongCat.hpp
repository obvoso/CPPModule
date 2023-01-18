/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:58:46 by soo               #+#    #+#             */
/*   Updated: 2023/01/16 16:59:41 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
 public:
     WrongCat();
     WrongCat(const WrongCat& obj);
     WrongCat& operator=(const WrongCat& obj);
     ~WrongCat();
     void makeSound(void) const;
};

#endif