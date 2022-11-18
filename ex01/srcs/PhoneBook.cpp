/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 14:44:38 by soo               #+#    #+#             */
/*   Updated: 2022/11/18 16:49:45 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->currentIdx = 0;
	this->currentCnt = 0;
}

void	PhoneBook::setCurrentIdx()
{
	if (contactIsEmpty())
		return ;
	currentIdx = (getCurrentIdx() + 1) % 8;
}

int	PhoneBook::getCurrentIdx()
{
	return (currentIdx);
}

void	PhoneBook::setCurrentCnt()
{
	if (contactIsFull())
		return ;
	++currentCnt;
}

int	PhoneBook::getCurrentCnt()
{
	return (currentCnt);
}

bool	PhoneBook::contactIsEmpty()
{
	if (getCurrentCnt())
		return (false);
	return (true);
}

bool	PhoneBook::contactIsFull()
{
	if (getCurrentCnt() == 8)
		return (true);
	return (false);
}

void	PhoneBook::addNewContact()
{
	setCurrentCnt();
	this->contacts[getCurrentIdx()].addContact();
	setCurrentIdx();
}

void	PhoneBook::searchContact()
{
	std::string	tmpIdx;
	int	searchIdx;

	if (contactIsEmpty())
		std::cout << "Empty Phonebook" << std::endl;
	else
	{
		std::cout << std::endl;
		std::cout << std::setw(11) << std::setfill(' ') << "index|";
		std::cout << std::setw(11) << std::setfill(' ') << "first name|";
		std::cout << std::setw(11) << std::setfill(' ') << "last name|";
		std::cout << std::setw(11) << std::setfill(' ') << "nickname|" << std::endl;
		for(int i  = 0; i < currentCnt; i++)
		{
			std::cout << std::setw(10) << std::setfill(' ') << i + 1 << "|";
			this->contacts[i].showContact();
		}
		while (true)
		{
			std::cout << "Enter the index you want" << std::endl;
			std::getline(std::cin, tmpIdx);
			if(this->contacts[0].checkInput())
				continue ;
			std::cin.clear();
			clearerr(stdin);
			searchIdx = std::atoi(tmpIdx.c_str());
			if (searchIdx > 0 && searchIdx < 9 && searchIdx <= getCurrentCnt())
			{
				this->contacts[searchIdx - 1].showDetailContact();
				break ;
			}
			else
				std::cout << "Invalid Index" << std::endl;
		}
	}
}

