/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:26:29 by soo               #+#    #+#             */
/*   Updated: 2023/03/30 18:17:03 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void) {}

RPN::RPN(const RPN& obj) 
{
	*this = obj;
}

RPN::~RPN() {}

RPN& RPN::operator=(const RPN& obj) 
{
	if (this == &obj)
		return (*this);
	this->_stack = obj._stack;
	return (*this);
}

void RPN::printError(void)
{
	std::cout << "Error" << std::endl;
	exit (1);
}

void RPN::calculateRpn(char token)
{
	int op1;
	int op2;

	if (_stack.empty())
		printError();
	op2 = _stack.top();
	_stack.pop();
	if (_stack.empty())
		printError();
	op1 = _stack.top();
	_stack.pop();
	switch(token)
	{
		case '+' : _stack.push(op1 + op2); break;
		case '-' : _stack.push(op1 - op2); break;
		case '*' : _stack.push(op1 * op2); break;
		case '/' : _stack.push(op1 / op2); break;
		default : printError(); break;
	}
}

void RPN::executeRpn(char *argv)
{
	while (*argv)
	{
		if (*argv == ' ')
		{
			++argv;
			continue;
		}
		else if (isdigit(*argv) || *argv == '0')
			_stack.push(*argv - '0');
		else
			calculateRpn(*argv);
		++argv;
	}
	if (_stack.size() != 1)
		printError();
	std::cout << _stack.top() << std::endl;
}
