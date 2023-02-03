/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 16:09:35 by soo               #+#    #+#             */
/*   Updated: 2023/02/03 17:34:50 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <cstddef>
#include <exception>
# include <iostream>

template<typename T>
class Array {
 private:
	T *_arr;
	size_t _idx;

 public:
	Array(void);
	Array(unsigned int n);
	Array(const Array& obj);
	~Array();
	Array& operator=(const Array& obj);

	T& operator [](size_t idx);
	size_t	size(void) const;
};

#endif

template<typename T>
Array<T>::Array(void)
	: _arr(NULL), _idx(0)
{}

template<typename T>
Array<T>::Array(unsigned int n)
	: _arr(new T[n]), _idx(n)
{}

template<typename T>
Array<T>::Array(const Array& obj)
	:_idx(0)
{
	*this = obj;
}

template<typename T>
Array<T>::~Array()
{
	if (_idx)
		delete _arr;
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& obj)
{
	if (this == &obj)
		return (*this);
	if (_idx)
		delete _arr;
	_idx = obj._idx;
	_arr = new T[obj._idx];
	for (size_t i = 0; i < _idx; i++)
		_arr[i] = obj._arr[i];
	return (*this);
}

template<typename T>
T& Array<T>::operator [](size_t idx)
{
	if (idx >= size())
		throw (std::exception());
	return (_arr[idx]);
}

template<typename T>
size_t	Array<T>::size(void) const
{
	return (_idx);
}
