#include <iostream>

int main ()
{
    float user_balances[10] = {};

    for(int idx = 0; idx < 10; idx++)
    {
        std::cout << "Balances[index]: " << user_balances[idx] << std::endl;
    }

    for(int idx = 0; idx < 10; idx++)
    {
        user_balances[idx] = idx * 10;
    }

    for(int idx = 0; idx < 10; idx++)
    {
        std::cout << "Balances[index]: " << user_balances[idx] << std::endl;
    }
    return 0;
}
