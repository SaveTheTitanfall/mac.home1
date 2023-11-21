#include <iostream>

int main()
{
    char a;
    bool b = true;
    int sum = 0;
    while ( b == true )
    {
        std::cin >> a;
        if ( a == '.')
        {
            b = false;
        }
        if ( std::islower(a) )
        {
            char up = std::toupper(a);
            std::cout << up << " ";
        }
        else if ( std::isdigit(a))
        {
            int g = a - '0';
            sum += g;
            std::cout << sum <<" ";
        }
        else
        {
            if( a != '.')
            std::cout <<"this dont work there ";
        }
    }
    return 0;
}
