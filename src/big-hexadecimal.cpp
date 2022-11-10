#include "big-hexadecimal.hpp"

#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
#include <iomanip>

int char2int(char input);

BigHexadecimal::BigHexadecimal(const std::string& hexNumber)
{
    std::cout << "BigHexadecimal constructor" << std::endl;
    std::cout << hexNumber << std::endl;

    for (size_t i = 0; i < hexNumber.length(); i+=2)
    {
        this->hexVector.push_back(char2int(hexNumber[i]) * 16 + char2int(hexNumber[i + 1]));
    }
}

int char2int(char input)
{
    if(input >= '0' && input <= '9')
        return input - '0';
    if(input >= 'A' && input <= 'F')
        return input - 'A' + 10;
    if(input >= 'a' && input <= 'f')
        return input - 'a' + 10;
    throw std::invalid_argument("Invalid input string");
}

std::ostream& operator << (std::ostream& os, const BigHexadecimal& obj)
{
    for (auto const& elem : obj.hexVector)
        os << std::hex << std::setfill('0') << std::setw(2) << elem;
    return os;
}

