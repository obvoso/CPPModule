/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 15:06:59 by soo               #+#    #+#             */
/*   Updated: 2023/02/06 15:32:15 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <list>
#include <vector>
#include <deque>
#include <algorithm>

template<typename T>
typename T::iterator easyfind(T& container, int value)
{
    typename T::iterator iter;

    iter = std::find(container.begin(), container.end(), value);
    if (iter == container.end())
        throw(std::runtime_error("can not find a value in container"));
    return (iter);
}

#endif