/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 20:47:00 by soo               #+#    #+#             */
/*   Updated: 2022/11/19 22:49:51 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANB_HPP
#define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
    private :
        std::string name;
        Weapon *weapon;
    
    public :
        HumanB(std::string name);
        ~HumanB(void);
        void    setName(std::string name);
        std::string getName(void);
        
        void    attack(void);
        void    setWeapon(Weapon &weapon);
};

#endif