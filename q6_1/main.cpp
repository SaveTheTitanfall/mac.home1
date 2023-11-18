#include <iostream>

int main()
{
    int a , b , c , d = 0;
    std::cin >>a >> b >> c;
    std::cout << a<<" ";
    d = a;
    for(int i = 1 ; i < c/a ; i++)
    {
        std::cout<< a+(d*i)<<" ";
    }
    return 0;
}
