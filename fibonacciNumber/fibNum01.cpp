#include <unordered_map>
#include <iostream>
using namespace std;

typedef unsigned long long ULL;
ULL fibHelper(ULL n, std::unordered_map<ULL,ULL>& map)
{
    if (n<2) return n;
    auto iterator = map.find(n);
    if (iterator!=map.end())
        return iterator->second;
    map.emplace(n, fibHelper(n-2, map)+fibHelper(n-1, map));
    return map[n];
}

ULL fibA(ULL n)
{
    std::unordered_map<ULL, ULL> fibHelpMap;
    return fibHelper(n, fibHelpMap);
}

int main() // int argc, char* argv[]
{
    std::cout << "Fibonacci number(200'000):\n";
    std::cout << fibA(200'000) << '\n';
    return 0;
}
