#include <iostream>
#include <list>
#include <numeric>
#include <vector>

// Every time use auto for Iterator

int main()
{
    std::vector<int> my_vector(5, 0);
    std::iota(my_vector.begin(), my_vector.end(), 0);

    std::list<int> my_list(5, 0);
    std::iota(my_list.begin(), my_list.end(), 0);

    // ForwardIterator
    std::vector<int>::iterator it1 = my_vector.begin();
    auto it2 = my_vector.end();

    for (; it1 != it2; it1++)
    {
        std::cout << *it1 << " " << &(*it1) << " " << &it1 << std::endl;
    }
    std::cout << std::endl;

    // Const ForwardIterator

    std::vector<int>::const_iterator it3 = my_vector.cbegin();
    auto it4 = my_vector.cend();

    for (; it3 != it4; it3++)
    {
        std::cout << *it3 << " " << &(*it3) << " " << &it3 << std::endl;

        // *it3 = 10;
    }
    std::cout << std::endl;

    // BidirectionalIterator

    std::vector<int>::reverse_iterator it5 = my_vector.rbegin();
    auto it6 = my_vector.rend();

    for (; it5 != it6; it5++)
    {
        std::cout << *it5 << " " << &(*it5) << " " << &it5 << std::endl;
    }
    std::cout << std::endl;

    // const BidirectionalIterator

    std::vector<int>::const_reverse_iterator it7 = my_vector.crbegin();
    auto it8 = my_vector.crend();

    for (; it7 != it8; it7++)
    {
        std::cout << *it7 << " " << &(*it7) << " " << &it7 << std::endl;
    }


    return 0;
}
