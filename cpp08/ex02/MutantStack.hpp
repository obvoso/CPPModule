/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 19:53:48 by soo               #+#    #+#             */
/*   Updated: 2023/02/06 15:38:43 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <deque>

template<typename T>
class MutantStack : public std::stack<T>
{
 public:
    typedef typename std::stack<T>::container_type::iterator            iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator    reverse_iterator;
     
     MutantStack(void);
     MutantStack(const MutantStack& obj);
     MutantStack& operator=(const MutantStack& obj);
     ~MutantStack();

    iterator begin(void)
    {
        return (this->c.begin());
    }
    iterator end(void)
    {
        return (this->c.end());
    }
    reverse_iterator rbegin(void)
    {
        return (this->c.rbegin());
    }
    reverse_iterator rend(void)
    {
        return (this->c.rend());
    }
};

template<typename T>
MutantStack<T>::MutantStack(void) {}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack& obj) 
{
    *this = obj;
}

template<typename T>
MutantStack<T>::~MutantStack() {}

template<typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& obj) 
{
    (void)obj;
    return (*this);
}

#endif