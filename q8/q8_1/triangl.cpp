#include <iostream>
#include "triangl.hpp"

void  ptriangl()
{
    int a ,pos=0 ,neg=0 , o=0 , b;
    std::cin >> b;
    for( int i = 0 ; i < b ; i++)
    {
        std::cin >> a;
        if( a > 0 )
        {
            pos++;
        }
        else if ( a < 0)
        {
            neg ++;
        }
        else
        {
            o++;
        }
    }
    std::cout << " pos- " << pos << "\n neg- " << neg << "\n zero- " << o;
}
