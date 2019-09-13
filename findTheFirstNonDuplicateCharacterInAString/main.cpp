#include <iostream>
#include <map>

char first_non_repeating(std::string str)
{
    if (str.size()==0)
        return '0';
    std::map<char, unsigned> charmap{};
    for (const auto & element : str)
        ++charmap[element];
    auto it = charmap.begin();
    for (const auto & element : charmap) {
        if (element.second == 1)
            return element.first;
    }
    return '0';
}

int main()
{
    std::string str1 = "aabbcddeefff";
    std::string str2 = "bccddeeffgghhtttyyy";
    std::string str3 = "lolowpwpx";
    std::string str4 = "aaaaaaaa";
    std::string str5 = "aaaabbccc";

    std::cout << first_non_repeating(str1) << '\n';
    std::cout << first_non_repeating(str2) << '\n';
    std::cout << first_non_repeating(str3) << '\n';
    std::cout << first_non_repeating(str4) << '\n';
    std::cout << first_non_repeating(str5) << '\n';

    return 0;
}