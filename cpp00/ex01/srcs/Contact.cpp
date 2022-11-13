/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 15:51:43 by soo               #+#    #+#             */
/*   Updated: 2022/11/13 21:22:24 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string		Contact::getContactFirstName()
{
	return (contactFirstName);
}
void			Contact::setContactFirstName(std::string s)
{
	contactFirstName = s;
}
std::string		Contact::getContactLastName()
{
	return (contactLastName);
}
void			Contact::setContactLastName(std::string s)
{
	contactLastName = s;
}
std::string		Contact::getContactNickName()
{
	return (contactNickName);
}
void			Contact::setContactNickName(std::string s)
{
	contactNickName = s;
}
std::string		Contact::getContactPhoneNumber()
{
	return (contactPhoneNumber);
}
void			Contact::setContactPhoneNumber(std::string s)
{
	contactPhoneNumber = s;
}
std::string		Contact::getContactDarkestSecret()
{
	return (contactDarkestSecret);
}
void			Contact::setContactDarkestSecret(std::string s)
{
	contactDarkestSecret = s;
}

bool	Contact::checkInput()
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

void	Contact::addContact()
{
	std::string tmp;
	
	while (true)
	{
		std::cout << "Enter a first name" << std::endl;
		std::cin >> tmp;
		if (!checkInput())
			break ;
	}
	setContactFirstName(tmp);
	while (true)
	{
		std::cout << "Enter a last name" << std::endl;
		std::cin >> tmp;
		if (!checkInput())
			break ;
	}
	setContactLastName(tmp);
	while (true)
	{
		std::cout << "Enter a nickname" << std::endl;
		std::cin >> tmp;
		if (!checkInput())
			break ;
	}
	setContactNickName(tmp);
	while (true)
	{
		std::cout << "Enter a phone number" << std::endl;
		std::cin >> tmp;
		if (!checkInput() && std::atoi(tmp.c_str()))
			break ;
	}
	setContactPhoneNumber(tmp);
	while (true)
	{
		std::cout << "Enter a darkest secret" << std::endl;
		std::cin >> tmp;
		if (!checkInput())
			break ;
	}
	setContactDarkestSecret(tmp);
}

std::string Contact::getShortStr(std::string str)
{
	if (static_cast<int>(str.size()) > 10)
		return (str.substr(0, 9) + ".");
	else
		return (std::string(10 - static_cast<int>(str.size()), ' ') + str);
}

void	Contact::showContact()
{
	std::cout << getShortStr(getContactFirstName()) << "|";
	std::cout << getShortStr(getContactLastName()) << "|";
	std::cout << getShortStr(getContactNickName()) << "|" << std::endl;
}

void	Contact::showDetailContact()
{
	std::cout << "FistName : " << getContactFirstName() << std::endl;
	std::cout << "LastName : " << getContactLastName() << std::endl;
	std::cout << "NickName : " << getContactNickName() << std::endl;
	std::cout << "PhoneNumber : " << getContactPhoneNumber() << std::endl;
	std::cout << "DarkestSecret : " << getContactDarkestSecret() << std::endl;
}