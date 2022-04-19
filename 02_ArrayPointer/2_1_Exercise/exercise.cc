#include <iostream>

#include "exercise.h"

// Exercise 1
double array_sum(const double *p_array, const unsigned int &length)
{
    double result = 0;
    for (int i = 0; i < length; i++)
    {
        result = result + p_array[i];
    }
    return result;

}

// Exercise 2
int *array_constructor(const int &value, const unsigned int &length)
{
    int *array = new int[length];
    for (int i = 0; i < length; i++)
    {
        array[i] = value;
    }
    return array;

}
