#include <iostream>

// Immer lieber Pre-increment verwendens

void func(int val)
{
    std::cout << "Inner val: " << val << std::endl;
}

// i++ Post-increment
// ++i Pre-increment

int main()
{
    int val = 0;

    std::cout << "Outer val: " << val << std::endl;
    func(val++);
    std::cout << "Outer val: " << val << std::endl;

    for (int i = 0; i < 5; i++)
    {
        std::cout << i << std::endl;
    }
    for (int i = 0; i < 5; ++i)
    {
        std::cout << i << std::endl;
    }


    return 0;
}
