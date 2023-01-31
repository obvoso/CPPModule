/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 18:11:25 by soo               #+#    #+#             */
/*   Updated: 2023/01/31 16:40:53 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(void)
    : _data(0), _endptr(NULL), _string("")
{
}

Convert::Convert(char *line)
{
	try {
		_origin = static_cast<std::string>(line);
		_data = std::strtod(line, &_endptr);
		_string = static_cast<std::string>(_endptr);
	}
	catch(const std::bad_alloc& e)
	{
		return ;
	}
}

Convert::Convert(const Convert& obj)
{
    *this = obj;
}

Convert::~Convert()
{
}

Convert& Convert::operator=(const Convert& obj)
{
    if (this != &obj)
    {
        _data = obj._data;
        _endptr = obj._endptr;
        _string = obj._string;
        _char = obj._char;
        _int = obj._int;
        _float = obj._float;
        _double = obj._double;
    }
    return (*this);
}

void Convert::toChar(void)
{
    _char = static_cast<char>(_data);
}

void Convert::toInt(void)
{
    _int = static_cast<int>(_data);
}

void Convert::toFloat(void)
{
    _float = static_cast<float>(_data);
}

void Convert::toDouble(void)
{
    _double = _data;
}


void Convert::printChar(void)
{
    toChar();
    if (std::isprint(_char) && _string.length() != 1 && *_endptr != 'f')
        std::cout << "char: impossible" << std::endl;
    else if (std::isprint(_char))
        std::cout << "char: '" << _char << "'" <<  std::endl;
    else
        std::cout << "char: Non displayble" << std::endl;
}

void Convert::printInt(void)
{
    toInt();
    if ((_string.length() > 1 && *_endptr != 'f') || 
		_data != _data || _data * 2 == _data)
        std::cout << "int: impossible" << std::endl;
    else if(_int > INT_MAX || _int < INT_MIN)
        std::cout << "int: overflow or underflow" << std::endl;
    else if(!_string.length() || (_string.length() == 1 && *_endptr == 'f'))
        std::cout << "int: " << _int << std::endl;
}

void Convert::printFloat(void)
{
    toFloat();
    if (_string != "" && _string.length() != 1 && *_endptr != 'f')
        std::cout << "float: impossible" << std::endl;
    else if (static_cast<float>(_int) == _float)
        std::cout << "float: " << _float << ".0f" << std::endl;
    else
        std::cout << "float: " << _float << "f" << std::endl;
}

void Convert::printDouble(void)
{
    toDouble();
    if (_string != "" && _string.length() != 1 && *_endptr != 'f')
        std::cout << "double: impossible" << std::endl;
    else if (static_cast<double>(_int) == _double)
        std::cout << "double: " << _double << ".0" << std::endl;
    else
        std::cout << "double: " <<_double << std::endl;
}

void Convert::print(void)
{
    printChar();
    printInt();
    printFloat();
    printDouble();
}
