#include <iostream>

int main()
{
    int a , b  = 1 ,c = 0 ,r;
    std::cin >>a ;
    if( a <= 1 )
    {
        std::cout << 1 << " ";
        return 0;
    }
    for (int i = 2 ; i <= a ; i ++)
    {
        r = b + c;
        b = c;
        c = r;
    }
    std::cout << r << " ";
    return 0;
}
