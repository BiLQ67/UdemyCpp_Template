#include <bitset>
#include <iostream>

int main()
{
    // Binary
    std::bitset<8> my_byte1(std::string("00011101"));
    std::bitset<8> my_byte2(std::string("10010101"));

    std::cout << my_byte1 << std::endl;
    std::cout << my_byte2 << std::endl;

    std::cout << "AND: " << (my_byte1 & my_byte2) << std::endl;
    std::cout << "OR: " << (my_byte1 | my_byte2) << std::endl;
    std::cout << "XOR: " << (my_byte1 ^ my_byte2) << std::endl;
    std::cout << "NEGATION: " << ~my_byte1 << std::endl;

    // Hexa
    unsigned char hex1 = 0x01; // 0000 0001
    unsigned char hex2 = 0xff; // 1111 1111

    return 0;
}
