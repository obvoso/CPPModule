/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 02:24:54 by soo               #+#    #+#             */
/*   Updated: 2023/01/25 02:31:30 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat A("soo", 10);
		Bureaucrat B("bal", 150);

		std::cout << std::endl;

		std::cout << A << std::endl;
		std::cout << B << std::endl;
		std::cout << std::endl;

		A.increaseGrade(9);
		A.increaseGrade(20);
		B.decreaseGrade(1);

		std::cout << std::endl;

		std::cout << A << std::endl;
		std::cout << B << std::endl;
		std::cout << std::endl;

	}
	catch (std::exception &e)
	{
		std::cerr << "Exception : " << e.what() << std::endl;
	}
	return 0;
}