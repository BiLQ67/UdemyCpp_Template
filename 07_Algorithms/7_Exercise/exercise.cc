#include <algorithm>
#include <chrono>
#include <functional>
#include <iostream>
#include <iterator>
#include <random>
#include <vector>

#include "exercise.h"

// Exercise 2
std::vector<bool> shuffle_till_equal(const BinaryArray &target, BinaryArray input)
{
    bool equal = false;
    int iteration = 1;
    std::random_device gen;
    std::mt19937 random_generator{gen()};
    std::uniform_int_distribution<int> random_distribution{0, 1};

    while (!equal)
    {
        if (iteration % 100'000 == 0)
        {
            std::cout << std::endl << "Iteration: " << iteration;
        }
        iteration++;

        std::shuffle(input.begin(), input.end(), random_generator);

        if (std::equal(input.begin(), input.end(), target.begin()))
        {
            equal = true;
        }
    }

    return input;
}

// Exercise 3
std::vector<bool> smart_shuffle_till_equal(const BinaryArray &target, BinaryArray input)
{
    bool equal = false;
    int iteration = 1;
    std::random_device gen;
    std::mt19937 random_generator{gen()};
    std::uniform_int_distribution<int> random_distribution{0, 1};

    while (!equal)
    {
        for (int i = 0; i < input.size(); i++)
        {
            if (input[i] != target[i])
            {
                std::shuffle(input.begin() + i, input.end(), random_generator);
                i--;
            }
        }
        if (std::equal(input.begin(), input.end(), target.begin()))
        {
            equal = true;
        }
    }

    return input;
}
