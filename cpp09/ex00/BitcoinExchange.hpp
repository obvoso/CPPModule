/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 17:52:15 by soo               #+#    #+#             */
/*   Updated: 2023/03/29 19:20:03 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <map>
# include <fstream>

#define NEGATIVE "not a positive number."
#define BAD_INPUT "bad input"
#define LARGE_NUMBER "too large a number."

enum Date {
    SUCCESS,
    ERR_NEGATIVE,
    ERR_BAD_INPUT,
    ERR_LARGE_NUMBER,
};

class BitcoinExchange
{
 private:
     std::map<std::string, double> _map;
     std::string _date;
     double _value;

 public:
     BitcoinExchange(void);
     BitcoinExchange(const BitcoinExchange& obj);
     BitcoinExchange& operator=(const BitcoinExchange& obj);
     ~BitcoinExchange();

     void initMap(void);
     void initInput(char *infile);
     void printResult(void);
     int  checkDate(void);
     int  checkValue(void);
     double findValue(void);
     bool checkLeapYear(int year);
};

#endif
