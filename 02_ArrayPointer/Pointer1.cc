#include <iostream>

// &: Reference (Memory Address)
// *p: De-reference (Value of that memory address)

int main()
{
    int number = 5;
    std::cout << "Value of number: " << number << std::endl;
    std::cout << "Address of number: " << &number << std::endl; // 0c

    int *p = &number;
    std::cout << "Value of p: " << p << std::endl; // 0c
    std::cout << "Address of p: " << &p << std::endl;
    std::cout << "Value of the memory address that p points to: " << *p << std::endl;

    return 0;
}
