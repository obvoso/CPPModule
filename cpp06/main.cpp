/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 20:03:05 by soo               #+#    #+#             */
/*   Updated: 2023/01/30 20:08:25 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "argument error" << std::endl;
        return (0);
    }
    Convert convert(argv[1]);
    convert.print();
    return (0);
}