/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 15:26:54 by soo               #+#    #+#             */
/*   Updated: 2022/11/13 21:12:16 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static bool	checkInput()
{
	if (std::cin.fail() || std::cin.get() == EOF || std::cin.eof())
	{
		std::cin.clear();
		clearerr(stdin);
		std::cerr << "Invalid Input\n";
		return (true);
	}
	return (false);
}

int main(int argc, char **argv)
{
	PhoneBook	phonebook;
	std::string	command;
	static_cast<void>(argv);

	if (argc != 1)
	{
		std::cerr << "Argument Error\n";
		return (0);
	}
	while (true)
	{
		std::cout << "Enter a command(ADD or SEARCH or EXIT)" << std::endl;
		std::cin>>command;
		if (checkInput())
			;
		else if (command == "ADD")
			phonebook.addNewContact();
		else if (command == "SEARCH")
			phonebook.searchContact();
		else if (command == "EXIT")
			exit(0);
	}
	return (0);
}