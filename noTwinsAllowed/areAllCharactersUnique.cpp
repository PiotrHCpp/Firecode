#include <string>
#include <algorithm>
#include <iostream>

bool are_all_characters_unique(std::string str)
{
    std::sort(str.begin(), str.end());
    auto iterator = std::unique(str.begin(), str.end()); 
    if (iterator==str.end())
        return true;
    return false;
}

int main()
{
    std::string input;
    std::cout << "Enter string for unique check: ";
    std::cin >> input;
    std::cout << std::endl;
    if (are_all_characters_unique(input))
        std::cout << "Entered string is unique!\n";
    else
        std::cout << "Entered string is NOT unique!\n";
    return 0;
}