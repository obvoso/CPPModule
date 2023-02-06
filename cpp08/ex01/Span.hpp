/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 15:46:43 by soo               #+#    #+#             */
/*   Updated: 2023/02/06 15:18:53 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <deque>
# include <list>

class Span
{
 private:
     std::deque<int> _deque;
     size_t _size;

     Span(void);
 public:
     Span(unsigned int N);
     Span(const Span& obj);
     Span& operator=(const Span& obj);
     ~Span();

     void addNumber(int n);
     long long shortestSpan(void);
     long long longestSpan(void);

     void print(void);

     template<typename T>
     void addNumbers(T &copy)
     {
         if (_size < _deque.size() + copy.size())
            throw (std::runtime_error("no space in deque"));
         _deque.insert(_deque.end(), copy.begin(), copy.end());
     }
};

#endif
