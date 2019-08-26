#include <iostream>
#include <unordered_map>
#include <algorithm>

// Add any helper functions(if needed) above.
int single_number(int arr[], int sz)
{
    std::unordered_map<int, int> container{};
    for (std::size_t i=0; i<sz; ++i)
        ++container[arr[i]];
    
    for (auto it = container.begin(); it != container.end(); ++it)
        if (it->second == 1) return it->first;
    
    return 0;    
}

int main()
{
    int pTable[5] = {3,3,4,5,5};
    for (int j=0; j<5; j++)  std::cout << j << ": " << pTable[j] << '\n';
    std::cout << single_number(pTable, 5);
    return 0;
}