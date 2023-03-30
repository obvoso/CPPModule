/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:21:47 by soo               #+#    #+#             */
/*   Updated: 2023/03/30 18:08:12 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>

class RPN {
 private:
	std::stack<int> _stack;
 public:
	RPN(void);
	RPN(const RPN& obj);
	~RPN();
	RPN& operator=(const RPN& obj);
	
	void executeRpn(char *argv);
	void calculateRpn(char token);
	void printError(void);
};

#endif

