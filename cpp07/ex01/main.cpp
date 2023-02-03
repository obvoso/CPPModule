/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 15:37:26 by soo               #+#    #+#             */
/*   Updated: 2023/02/03 16:02:41 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	int arr[3] = {0, 1, 2};
	std::string arr1[3] = {"aaa", "bbb", "ccc"};
	float arr2[3] = {1.23, 4.56, 7.89};

	iter(arr, 3, print);
	std::cout << std::endl;
	iter(arr1, 3, print);
	std::cout << std::endl;
	iter(arr2, 3, print);
}