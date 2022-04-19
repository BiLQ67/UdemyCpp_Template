#include <iostream>

#include "exercise.h"

// Exercise 1
void push_back(int *&input_array, const unsigned int &size, const int &value)
{
    int *p = new int[size + 1];
    for (int i = 0; i < size ; i++)
    {
        p[i] = input_array[i];
    }
    p[size] = value;

    delete[] input_array;
    input_array = p;
}

// Exercise 2
void pop_back(int *&input_array, const unsigned int &size)
{
    int *p = new int[size - 1];
    for (int i = 0; i < size - 1 ; i++)
    {
        p[i] = input_array[i];
    }

    delete[] input_array;
    input_array = p;
}
