#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void) {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& obj)
{
    *this = obj;
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& obj)
{
    if (this == &obj)
        return ;
    _map = obj._map;
    _input = obj._input;
    return (*this);
}

void BitcoinExchange::initMap(void)
{
    std::ifstream dataFile;
    std::string line;
    int delimiter;

    dataFile.open("data.csv");
    if (dataFile.fail())
    {
        std::cerr << "Error: file open error" << std::endl;
        exit(1);
    }
    std::getline(dataFile, line);
    while (!dataFile.eof())
    {
        std::getline(dataFile, line);
        delimiter = line.find(',');
        _map.insert({ line.substr(0, delimiter), 
                    std::stod(line.substr(delimiter + 1)) });
    }
}

void BitcoinExchange::initInput(char *infile)
{
    std::ifstream inputFile;
    std::string line;
    int delimiter = 0;

    inputFile.open(infile);
    if (inputFile.fail())
    {
        std::cerr << "Error: file open error" << std::endl;
        exit(1);
    }
    std::getline(inputFile, line);
    if (line.compare("date | value"))
    {
        std::cerr << "Error: invalid input data format" << std::endl;
        exit(1);
    }
    while(!inputFile.eof())
    {
        std::getline(inputFile, line);
        delimiter = line.find(' | ');
        if (delimiter == std::string::npos)
        {
            std::cerr << "Error: invalid input data format??ㅇㅓ캐처리" << std::endl;
            exit(1);
        }
        _date = line.substr(0, delimiter);
        _value = std::stod(line.substr(delimiter + 1));
        printResult();
    }
}

void BitcoinExchange::printResult(void)
{
    if ()//여기서 에러 디파인 처리 하고
}

int  BitcoinExchange::checkDate(void)
{

}

void BitcoinExchange::findValue(void)
{
//이거 불러서 find
}

