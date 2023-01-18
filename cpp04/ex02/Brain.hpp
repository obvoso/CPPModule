/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 20:48:19 by soo               #+#    #+#             */
/*   Updated: 2023/01/18 19:55:47 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>


class Brain
{
 private:
    std::string _ideas[100];
 public:
     Brain();
     Brain(const Brain& obj);
     Brain& operator=(const Brain& obj);
     ~Brain();
     std::string getIdea(int i) const;
     void setIdea(std::string idea, int i);
};

#endif  
