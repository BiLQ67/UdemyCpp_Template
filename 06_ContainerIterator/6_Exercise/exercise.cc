#include <iostream>

#include "exercise.h"

// Exercise 2
std::string get_oldest_friend(const Friends &friends)
{
    std::string oldest_friend;
    int age = 0;
    for (const auto &val : friends)
    {
        if (age < val.second.first)
        {
            age = val.second.first;
            oldest_friend = val.first;
        }
    }
    return oldest_friend;
}

std::string get_heaviest_friend(const Friends &friends)
{
    std::string heaviest_friend;
    int weigth = 0;
    for (const auto &val : friends)
    {
        if (weigth < val.second.second)
        {
            weigth = val.second.second;
            heaviest_friend = val.first;
        }
    }
    return heaviest_friend;
}
