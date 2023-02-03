/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 17:16:15 by soo               #+#    #+#             */
/*   Updated: 2023/02/03 17:39:16 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define MAX_VAL 3

int main(void)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		size_t value = rand();
		numbers[i] = value;
		mirror[i] = value;
		
	}
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);

		numbers[0] = 0;
		tmp[0] = 1;
		test[0] = 2;
		std::cout << "numbers : " << numbers[0] << std::endl;
		std::cout << "tmp : " << tmp[0] << std::endl;
		std::cout << "test : " << test[0] << std::endl;
	}
	//for (int i = 0; i < MAX_VAL; i++)
	//{	
	//	if (mirror[i] != numbers[i])
	//	{
	//		std::cerr << "didn't save the same value!!" << std::endl;
	//		return 1;
	//	}
	//}
	//try
	//{
	//	numbers[-2] = 0;
	//}
	//catch(const std::exception& e)
	//{
	//	std::cerr << e.what() << '\n';
	//}
	//try
	//{
	//	numbers[MAX_VAL] = 0;
	//}
	//catch(const std::exception& e)
	//{
	//	std::cerr << e.what() << '\n';
	//}
	delete[] mirror;
	//system("leaks array");
	return 0;
}