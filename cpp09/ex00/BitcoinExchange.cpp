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
        return (*this);
    _map = obj._map;
    _date = obj._date;
    _value = obj._value;
    return (*this);
}

void BitcoinExchange::initMap(void)
{
    std::ifstream dataFile;
    std::string line;
    size_t delimiter;

    dataFile.open("data.csv");
    if (dataFile.fail())
    {
        std::cerr << "Error: could not open file" << std::endl;
        exit(1);
    }
    std::getline(dataFile, line);
    while (std::getline(dataFile, line))
    {
        delimiter = line.find(',');
        if (delimiter == std::string::npos)
        {
            std::cerr << "Error: data format is invalid" << std::endl;
            exit(1);
        }
        _map.insert(std::make_pair(line.substr(0, delimiter),
                    std::stod(line.substr(delimiter + 1))));
    }
}

void BitcoinExchange::initInput(char *infile)
{
    std::ifstream inputFile;
    std::string line;
    size_t delimiter;

    inputFile.open(infile);
    if (inputFile.fail())
    {
        std::cerr << "Error: could not open file" << std::endl;
        exit(1);
    }
    std::getline(inputFile, line);
    if (line.compare("date | value"))
    {
        std::cerr << "Error: invalid input data format" << std::endl;
        exit(1);
    }
    while(std::getline(inputFile, line))
    {
        delimiter = line.find('|');
        if (delimiter == std::string::npos)
        {
            _date = line;
            _value = 0;
        }
        else
        {
            _date = line.substr(0, delimiter - 1);
            _value = std::stod(line.substr(delimiter + 2));
        }
        printResult();
    }
}

void BitcoinExchange::printResult(void)
{
    int checkValueRet;

    checkValueRet = checkValue();
    if (checkDate() == ERR_BAD_INPUT)
        std::cerr << "Error: " << BAD_INPUT << " => " << _date << std::endl;
    else if (checkValueRet == ERR_NEGATIVE)
        std::cerr << "Error: " << NEGATIVE << std::endl;
    else if (checkValueRet == ERR_LARGE_NUMBER)
        std::cerr << "Error: " << LARGE_NUMBER << std::endl;
    else
    {
        double coin = findValue() * _value;
        std::cout << _date << " => " << _value << " = " << coin << std::endl;
    }
}

bool BitcoinExchange::checkLeapYear(int year)
{
    return ((year % 4 == 0 && year % 100 != 0) 
            || year % 400 == 0);
}

int  BitcoinExchange::checkDate(void)
{
    int year = 0;
    int month = 0;
    int day = 0;

    int firstHyphen = _date.find('-');
    year = std::stoi(_date.substr(0, firstHyphen));
    int secondHyphen = _date.find('-', firstHyphen + 1);
    month = std::stoi(_date.substr(firstHyphen + 1, secondHyphen));
    day = std::stoi(_date.substr(secondHyphen + 1));

    if (year < 2009 || (year < 2009 && month < 1 && day < 2))
        return (ERR_BAD_INPUT); //이걸 에러처리하는게 맞나
	if (month == 1 || month == 3 || month == 5 || month == 7
        || month == 8 || month == 10 || month == 12)
    {
        if (day <= 0 || 31 < day)
            return (ERR_BAD_INPUT);
        return (SUCCESS);
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        if (day <= 0 || 30 < day)
            return (ERR_BAD_INPUT);
        return (SUCCESS);
    }
    else if (month == 2)
    {
        if (checkLeapYear(year))
        {
            if (day <= 0 || 29 < day)
                return (ERR_BAD_INPUT);
        }
        else 
        {
            if (day <= 0 || 28 < day)
                return (ERR_BAD_INPUT);
        }
		return (SUCCESS);
    }
    return (ERR_BAD_INPUT);
}

int  BitcoinExchange::checkValue(void)
{
    if (_value < 0)
        return (ERR_NEGATIVE);
    if (_value > 1000)
        return (ERR_LARGE_NUMBER);
    return (SUCCESS);
}

double BitcoinExchange::findValue(void)
{
    std::map<std::string, double>::iterator it;
    
    it = _map.find(_date);
    if (it != _map.end())
        return (it->second);
    else
    {
        it = _map.lower_bound(_date);
        --it;
        return (it->second);
    }
}

