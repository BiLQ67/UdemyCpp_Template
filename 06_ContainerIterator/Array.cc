#include <array>
#include <iostream>
#include <vector>

int main()
{
    const int l = 10;

    std::vector<int> my_vector(l, 0);
    std::array<int, l> my_array;

    for (int i = 0; i < l; i++)
    {
        my_array[i] = i;
        my_vector[i] = i;
    }

    for (std::size_t i = 0; i < my_array.size(); i++)
    {
        std::cout << my_array[i] << std::endl;
    }

    my_vector.push_back(10);
    for (std::size_t i = 0; i < my_vector.size(); i++)
    {
        std::cout << my_vector[i] << std::endl;
    }


    return 0;
}
