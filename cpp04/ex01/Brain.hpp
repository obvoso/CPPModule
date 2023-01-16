/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 20:48:19 by soo               #+#    #+#             */
/*   Updated: 2023/01/16 21:40:31 by soo              ###   ########.fr       */
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
     std::string *getIdeas(void) const;
     std::string getIdea(int i) const
     void setIdea(std::string idea, int i);
};

#endif  
