/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 15:46:43 by soo               #+#    #+#             */
/*   Updated: 2023/02/04 19:48:40 by soo              ###   ########.fr       */
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
    //  void addNumbers(typename T::iterator begin, typename T::iterator end)
     void addNumbers(T begin, T end)
     {
         if (std::distance(begin, end) > static_cast<long> (_size - _deque.size()))
            throw (std::runtime_error("no space in deque"));
         while(begin != end)
            addNumber(*begin++);
     }
};

#endif
