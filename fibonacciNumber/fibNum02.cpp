#include <iostream>
using namespace std;

typedef unsigned long long ULL;

ULL fibB(const ULL& n)
{
    if (n<2) return n;
    ULL a=0, b=1, c=a+b;
    for (ULL it=2; it<=n; ++it)
    {
        a=b; 
        b=c; 
        c=a+b;
    }
    return b;
}

int main(int argc, char* argv[])
{
    std::cout << "Fibonacci number(200'000):\n";
    std::cout << fibB(200'000) << '\n';
    return 0;
}
