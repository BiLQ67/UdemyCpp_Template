#include <iostream>

// p is in the Stack
// and point of a Heap

int main()
{
    // Heap allocation (Speicher Reservieren)
    int *p = new int;
    *p = 4;

    // std::cout << "Memory address of p: " << &p << std::endl; // cc08
    // std::cout << "Memory address of pointed value: " << p << std::endl; // 1810
    // std::cout << "Value of the memory address p points to: " << *p << std::endl; // 4

    // Heap de-allocation
    delete p;

    std::cout << "Memory address of pointed value: " << p << std::endl; // 1810

    p = nullptr;

    std::cout << "Memory address of pointed value: " << p << std::endl; // 1810

    if(p != nullptr)
    {
        std::cout << "Value of the memory address p points to: " << *p << std::endl; // 4
        p = nullptr;
        std::cout << "Now is the Value nullptr." << std::endl;
    }

    return 0;
}
