/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 19:35:29 by soo               #+#    #+#             */
/*   Updated: 2022/12/26 20:17:41 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Replace_HPP
#define Replace_HPP

#include <iostream>
#include <fstream>

class Replace {
    private:
        std::string outFileName;
        std::ifstream inFile;
        std::ofstream outFile;
        std::string s1;
        std::string s2;

    public:
        void setS1(std::string s1);
        void setS2(std::string s2);
        void inFileOpen(std::string inFileName);
        void outFileOpen();
        void replaceContents();
};

#endif