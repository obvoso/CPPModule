/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 21:19:35 by soo               #+#    #+#             */
/*   Updated: 2023/04/01 02:43:15 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	PmergeMe merge;

	if (argc < 2)
		merge.printError();
	merge.init(&argv[1]);
	merge.vectorExecute(argc - 2);
	merge.dequeExecute(argc - 2);
	merge.printResult(argv, argc - 1);
	return (0);
}
