#include <iostream>
#include <numeric>
#include <vector>

// 1: auto val : vec => int val : vec
// 2: auto &val : vec => int &val : vec
// 3: const auto &val : vec => const int &val : vec
// 4: const auto val : vec => const int &val : vec

int main()
{


    std::vector<double> my_vector(10, 5);
    std::iota(my_vector.begin(), my_vector.end(), 0);

    // [begin, end]
    for (auto it = my_vector.begin(); it != my_vector.end(); it++)
    {
        std::cout << *it << std::endl;
    }

    // For each loop
    for (auto &val : my_vector)
    {
        std::cout << val << std::endl;
    }


    return 0;
}
