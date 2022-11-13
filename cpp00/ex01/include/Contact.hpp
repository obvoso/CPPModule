/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 16:30:45 by soo               #+#    #+#             */
/*   Updated: 2022/11/13 20:49:01 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
	private :
		std::string contactFirstName;
		std::string contactLastName;
		std::string contactNickName;
		std::string contactPhoneNumber;
		std::string contactDarkestSecret;

	public :
		std::string		getContactFirstName();
		void			setContactFirstName(std::string s);
		std::string		getContactLastName();
		void			setContactLastName(std::string s);
		std::string		getContactNickName();
		void			setContactNickName(std::string s);
		std::string		getContactPhoneNumber();
		void			setContactPhoneNumber(std::string s);
		std::string		getContactDarkestSecret();
		void			setContactDarkestSecret(std::string s);
		
		bool	checkInput();
		std::string getShortStr(std::string str);
		void	addContact();
		void	showContact();
		void	showDetailContact();
};

#endif