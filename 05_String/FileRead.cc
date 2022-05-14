#include <fstream>
#include <iostream>
#include <string>

int main()
{
    std::string str;
    std::string text;

    std::ifstream iffile;
    iffile.open("C:/Users/User/Documents/Git_Udemy_C++/UdemyCpp_Template/05_String/Text.txt");

    if (iffile.is_open())
    {
        while (std::getline(iffile, str))
        {
            text += str + '\n';
        }
    }

    iffile.close();

    std::cout << text << std::endl;

    return 0;
}
