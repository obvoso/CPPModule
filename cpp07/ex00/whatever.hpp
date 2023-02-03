/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 21:03:20 by soo               #+#    #+#             */
/*   Updated: 2023/02/03 15:25:09 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &x, T &y)
{
	if (x == y)
		return ;
		
	T	tmp;
	
	tmp = x;
	x = y;
	y = tmp;
}

template<typename T>
T	min(T &x, T &y)
{
	if (x > y)
		return (y);
	return (x);
}

template<typename T>
T	max(T &x, T &y)
{
	if (x > y)
		return (x);
	return (y);
}

# endif