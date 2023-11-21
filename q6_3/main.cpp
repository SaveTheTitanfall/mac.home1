#include <iostream>

int main()
{
    int a = 0 , b;
    std::cin >> a;
    b = a;
    if( a == 0)
    {
        std::cout << 1 << std::endl;
        return 0;
    }
    for ( int i = 1 ; i < a ; i++)
    {
        b *= i;
    }
    std::cout << b << std::endl;
    return 0;
}
