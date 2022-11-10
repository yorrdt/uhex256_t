#include <iostream>

#include "src/big-hexadecimal.hpp"

int main()
{

    //BigHexadecimal hexVal("0e60651a9934e8f0decd1c5fde39309e48fca0cd1c84a21ddfde95033762d86c");
    BigHexadecimal hexVal("00000000000000000696f4000000000000000000000000000000000000000000");

    std::cout << hexVal;

    return 0;
}
