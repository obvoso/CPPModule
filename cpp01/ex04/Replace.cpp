/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 19:42:14 by soo               #+#    #+#             */
/*   Updated: 2022/12/27 21:28:12 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

void Replace::setS1(std::string s1)
{
    this->s1 = s1;
}

void Replace::setS2(std::string s2)
{
    this->s2 = s2;
}

void Replace::inFileOpen(std::string inFileName)
{
    outFileName = inFileName;
    inFile.open(inFileName);
    if (inFile.fail())
    {
        std::cout << "inFile open Fail" << std::endl;
        exit (1);
    }
}

void Replace::outFileOpen()
{
    outFileName.append(".replace");
    outFile.open(outFileName);
    if (outFile.fail())
    {
        std::cout << "outFile open Fail" << std::endl;
        exit (1);
    }
}

void Replace::replaceContents()
{
    std::string line;

    size_t pos;
    while (!inFile.eof())
    {
        pos = 0;
        std::getline(inFile, line);
        while (true)
        {
            pos = line.find(s1, pos);
            if (pos == std::string::npos)
                break;
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos += s2.length();
        }
        outFile << line;
        outFile << std::endl;
    }
    inFile.close();
    outFile.close();
}