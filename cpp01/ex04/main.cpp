/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 18:57:37 by soo               #+#    #+#             */
/*   Updated: 2022/12/27 17:00:25 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int argc, char **argv)
{
	Replace replace;

	if (argc != 4)
	{
		std::cout << "Argument Error" << std::endl;
		return (1);
	}
	if ((std::strlen(argv[1]) == 0) || (std::strlen(argv[1]) == 0) 
		|| (std::strlen(argv[1]) == 0))
	{
		std::cout << "Argument Length Error" << std::endl;
		return (1);
	}
	replace.inFileOpen((std::string)argv[1]);
	replace.setS1((std::string)argv[2]);
	replace.setS2((std::string)argv[3]);
	replace.outFileOpen();
	replace.replaceContents();
	return (0);
}