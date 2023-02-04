/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:17:21 by soo               #+#    #+#             */
/*   Updated: 2023/02/04 19:34:33 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) {}

Span::Span(unsigned int N)
    : _size(N)
{}

Span::Span(const Span& obj)
{
    *this = obj;
}

Span::~Span() {}

Span& Span::operator=(const Span& obj)
{
    if (this == &obj)
        return (*this);
    _size = obj._size;
    _deque = obj._deque;
    return (*this);
}

void Span::addNumber(int n)
{
    if (_deque.size() >= _size)
        throw(std::runtime_error("deque is already full. can not add a number"));
    _deque.push_back(n);
}

long long Span::shortestSpan(void)
{
    long long ret = LLONG_MAX;
      if (_deque.size() < 2)
        throw(std::runtime_error("deque size is 1"));
    std::sort(_deque.begin(), _deque.end());
    for(size_t i = 0; i < _deque.size() - 1; i++)
    {
        int tmp = _deque[i + 1] - _deque[i]; 
        if (ret > tmp)
            ret = tmp;
    }
    return (ret);
}

long long Span::longestSpan(void)
{
    if (_deque.size() < 2)
        throw(std::runtime_error("deque size is 1"));
    return (*std::max_element(_deque.begin(), _deque.end()) - *std::min_element(_deque.begin(), _deque.end()));
}

void Span::print(void)
{
    for (size_t i = 0; i < _deque.size(); i++)
        std::cout << _deque[i] << std::endl;
    std::cout << std::endl;
}