#include <iostream>

int main()
{
    int array[5];
    for(int idx = 0; idx < 5; idx++)
    {
        array[idx] = 2 * idx;
        std::cout << array[idx] << std::endl;
    }
    int array2[] = {1,2,3,4,5,6,7,8};


    return 0;
}
