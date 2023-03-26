/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 17:52:15 by soo               #+#    #+#             */
/*   Updated: 2023/03/26 21:38:05 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <map>
# include <fstream>

enum Error {
    NEGATIVE,
    BAD_INPUT,
    LARGE_NUMBER
};

#define NEGATIVE "not a positive number"
#define BAD_INPUT "bad input"
#define LARGE_NUMBER "too large a number"

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
     void findValue(void);
};

#endif
