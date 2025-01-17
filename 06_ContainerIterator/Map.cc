#include <iostream>
#include <map>
#include <string>

void print_map(std::map<std::string, int> &map)
{
    for (const auto &val : map)
    {
        std::cout << val.first << " " << val.second << std::endl;
    }
}

int main()
{
    std::map<std::string, int> my_map1;

    my_map1["Jan"] = 28;
    my_map1["Dennis"] = 24;
    my_map1["Fabian"] = 27;

    print_map(my_map1);

    auto search_str = "Jann";
    auto it = my_map1.find(search_str);
    bool is_in = it != my_map1.end();
    std::cout << search_str << " found? " << std::boolalpha << is_in << std::endl;


    return 0;
}
