/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 20:08:59 by soo               #+#    #+#             */
/*   Updated: 2023/01/04 15:05:30 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
private:
    std::string     _name;
    unsigned int    _hitPoint;
    unsigned int    _energyPoint;
    unsigned int    _attackDamage;
    
public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap& obj);
    ClapTrap& operator=(const ClapTrap& obj);
    virtual ~ClapTrap();
    virtual void    attack(const std::string& target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
    unsigned int getAttackDamage(void);
public:
    void setName(std::string name);
    void setHitPoint(unsigned int amount);
    void setEnergyPoint(unsigned int amount);
    void setAttackDamage(unsigned int amount);
    std::string getName() const;
    unsigned int getHitPoint() const;
    unsigned int getEnergyPoint() const;
    unsigned int getAttackDamage() const;
};

#endif
