#include <algorithm>
#include <iostream>
#include <vector>

#include "exercise.h"

// Exercise 2
std::vector<double> max_row_values(Matrix &matrix)
{
    std::vector<double> maxima(matrix.size(), 0.0);

    //int k = 0;
    for (std::size_t i = 0; i < matrix.size(); i++)
    {
        double act_maxima = 0.0;
        //maxima[i] = matrix[i][k];
        for (std::size_t j = 0; j < matrix[i].size(); j++)
        {
            if (act_maxima < matrix[i][j])
            {
                act_maxima = matrix[i][j];
            }
            //k++;
        }
        //k = 0;
        maxima[i] = act_maxima;
    }

    return maxima;
}

// Exercise 3
double sort_and_max(std::vector<double> &vec)
{
    std::sort(vec.begin(), vec.end());
    return vec.back();
}
