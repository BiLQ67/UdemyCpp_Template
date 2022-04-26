#include <iostream>

#include "exercise.h"

namespace computation
{

// Exercise 1
double mean_array_value(int *array, const unsigned int &length)
{
    int mean = 0;
    for (unsigned int i = 0; i < length; i++)
    {
        mean += array[i];
    }

    mean = mean / length;

    return mean;
}

double mean_array_value(double *array, const unsigned int &length)
{
    double mean = 0;
    for (unsigned int i = 0; i < length; i++)
    {
        mean += array[i];
    }

    mean = mean / length;

    return mean;
}

} // namespace computation
