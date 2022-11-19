/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:52:54 by soo               #+#    #+#             */
/*   Updated: 2022/11/19 22:51:25 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANA_HPP
#define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
    private :
        std::string name;
        Weapon &weapon;
    
    public :
        HumanA(std::string name, Weapon &weapon);
        ~HumanA(void);
        void    setName(std::string name);
        std::string getName(void);
        
        void    attack(void);
};

#endif