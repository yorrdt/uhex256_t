#ifndef BIG_HEXADECIMAL_HPP
#define BIG_HEXADECIMAL_HPP

#include <vector>
#include <cstddef>
#include <string>
#include <iostream>

class BigHexadecimal {

public:
    BigHexadecimal(const std::string& hexNumber);

    friend std::ostream& operator << (std::ostream& os, const BigHexadecimal& obj);

private:
    std::vector<int> hexVector; // std::byte ???
};

#endif // BIG_HEXADECIMAL_HPP
