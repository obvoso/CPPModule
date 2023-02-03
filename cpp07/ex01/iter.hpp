/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 15:27:59 by soo               #+#    #+#             */
/*   Updated: 2023/02/03 15:37:20 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <cstdio>
#include <iostream>

template<typename T>
void	iter(T *arr, std::size_t len, void (*f)(const T&))
{
	for (std::size_t i = 0; i < len; i++)
		f(arr[i]);
}

template<typename T>
void	print(const T &arg)
{
	std::cout << arg << std::endl;
}

#endif