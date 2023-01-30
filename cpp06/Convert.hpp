/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 18:08:19 by soo               #+#    #+#             */
/*   Updated: 2023/01/30 22:06:28 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <cctype>

class Convert
{
 private:
     double _data;
     char *_endptr;
     std::string _string;
     std::string _origin;

     char _char;
     int _int;
     float _float;
     double _double;

     void   toChar(void);
     void   toInt(void);
     void   toFloat(void);
     void   toDouble(void);

     void   printChar(void);
     void   printInt(void);
     void   printFloat(void);
     void   printDouble(void);
     
 public:
     Convert(void);
     Convert(char *line);
     Convert(const Convert& obj);
     Convert& operator=(const Convert& obj);
     ~Convert();

     void   print(void);
};

#endif
