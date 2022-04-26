#include <iomanip>
#include <iostream>

// 1a. C++: Static_casts<> - converts object from one type a annother
// 1b. C: (newDtype)(varName)
// Eeasier to read, less prone to errors

int main()
{
    double number = 3.14;
    std::cout << std::setprecision(30) << number << std::endl;

    int number2 = number;
    std::cout << number2 << std::endl;

    // C-casting
    // (newDtype)(varName)
    float number3 = (float)(number);
    std::cout << std::setprecision(30) << number3 << std::endl;

    double number4 = (double)(number3);
    std::cout << std::setprecision(30) << number4 << std::endl;

    // c++-Casting
    // static_cast<newDtype>(varName)
    float number5 = static_cast<float>(number);
    std::cout << std::setprecision(30) << number5 << std::endl;

    double number6 = static_cast<double>(number3);
    std::cout << std::setprecision(30) << number6 << std::endl;

    int number7 = 133700;
    std::cout << number7 << std::endl;

    char number8 = static_cast<char>(number7);
    std::cout << static_cast<int>(number8) << std::endl;

    return 0;
}
