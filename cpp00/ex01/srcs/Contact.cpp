/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 15:51:43 by soo               #+#    #+#             */
/*   Updated: 2022/11/18 11:10:08 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.hpp"

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
	if (std::cin.fail() || std::cin.eof())
	{
		std::cin.clear();
		clearerr(stdin);
		std::cerr << "Invalid Input\n";
		return (true);
	}
	return (false);
}

std::string	Contact::inputInfo(std::string str)
{
	std::string tmp;
	
	while (true)
	{
		std::cout << str << std::endl;
		std::getline(std::cin, tmp);
		if (tmp.empty() || tmp.size() < 1)
			continue;
		if (!checkInput())
		{
			std::cin.clear();
			clearerr(stdin);
			break ;
		}
	}
	return (tmp);
}

void	Contact::addContact()
{
	std::string tmp;
	
	setContactFirstName(inputInfo("Enter a first name"));
	setContactLastName(inputInfo("Enter a last name"));
	setContactNickName(inputInfo("Enter a nickname"));
	setContactPhoneNumber(inputInfo("Enter a phone number"));
	setContactDarkestSecret(inputInfo("Enter a darkest secret"));
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