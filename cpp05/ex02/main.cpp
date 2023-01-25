/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 02:24:54 by soo               #+#    #+#             */
/*   Updated: 2023/01/25 21:41:49 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		Bureaucrat a("soo", 6);
		Form f1("Report", 5, 5);
		// Form f1("Report", 151, 5);

		std::cout << std::endl;

		std::cout << a << std::endl;
		std::cout << f1 << std::endl;

		a.signForm(f1);
		std::cout << std::endl;

		a.increaseGrade(1);
		a.signForm(f1);
		std::cout << std::endl;

		std::cout << a << std::endl;
		std::cout << f1 << std::endl;
		std::cout << std::endl;

	}
	catch (std::exception &e)
	{
		std::cerr << "Exception : " << e.what() << std::endl;
	}
	return 0;
}