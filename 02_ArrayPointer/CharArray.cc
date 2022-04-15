#include <iostream>

int main ()
{
    char first_name[] = {'F', 'a', 'b', 'i', 'a', 'n', '\0'};

    std::cout << first_name << std::endl;

    char last_name[] = "Giera-Rodemann";

    std::cout << last_name << std::endl;

    for (int i = 0; i < 14; i++)
    {
        std::cout << "Last Name[i]: " << last_name[i] << std::endl;
    }


    return 0;
}
