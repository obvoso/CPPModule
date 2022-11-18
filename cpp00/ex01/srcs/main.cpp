/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 15:26:54 by soo               #+#    #+#             */
/*   Updated: 2022/11/16 14:11:14 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

static bool	checkInput()
{
	if (std::cin.fail() || std::cin.eof())
	{
		std::cin.clear();
		clearerr(stdin);
		std::cerr << "Invalid Input\n";
		return (true);
	}
	return (false);
}

int main()
{
	PhoneBook	phonebook;
	std::string	command;

	while (true)
	{
		std::cout << "Enter a command(ADD or SEARCH or EXIT)" << std::endl;
		std::getline(std::cin, command);
		if (checkInput())
			continue;
		std::cin.clear();
		clearerr(stdin);
		if (command == "ADD")
			phonebook.addNewContact();
		else if (command == "SEARCH")
			phonebook.searchContact();
		else if (command == "EXIT")
			return (0);
		else
		 	std::cerr << "Invalid Input\n";
	}
	return (0);
}