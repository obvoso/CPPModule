/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:05:38 by soo               #+#    #+#             */
/*   Updated: 2022/11/13 21:01:25 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private :
		Contact contacts[8];
		int currentIdx;
		int	currentCnt;

	public :
		void	setCurrentIdx();
		int		getCurrentIdx();
		void	setCurrentCnt();
		int		getCurrentCnt();

		bool	contactIsEmpty();
		bool	contactIsFull();

		void	addNewContact();
		void	searchContact();
};

#endif