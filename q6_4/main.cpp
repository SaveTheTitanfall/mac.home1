#include <iostream>

int main()
{
    char buk ;
    std::cout <<"what u need a or b or c or d or e";
    std::cin >>buk;
    int kol, per , g = 0 , suk=0;
    std::cout <<"number";
    std::cin >> kol;
    if ( buk == 'a')
    {
        for( int i  = kol ; i > 0 ; i--)
        {
            per = i;
            while ( per != 0)
            {
                std::cout << "*";
                per --;
            }
            std::cout<<std::endl;
        }
    }
    if ( buk == 'b')
    {
        for( int i  = 0 ; i < kol ; i++)
        {
            per = i;
            while ( per >-1)
            {
                std::cout <<"*";
                per--;
            }
            if( i != kol-1)
            std::cout << std::endl;
        }
    }
    if( buk =='c')
    {
        for( int i  = 0 ; i < kol ; i ++)
        {
            std::cout << "***"<<std::endl;
        }
    }
    if( buk =='d')
    {
        for( int i  = 0 ; i < kol ; i ++)
        {
            for( int k = 0 ; k < i ; k++)
            {
                std::cout << " ";
            }
            std::cout << "***"<<std::endl;
        }
    }
    if ( buk == 'e') //work but i donk know how must be
    {
        for (int i = 1; i <= kol; ++i)
        {
            if (i % 2 == 1)
            {
              for (int j = 1; j <= i; ++j)
              {
                std::cout << (j % 2);
              }
              std::cout << std::endl;
            }
            else
            {
              for (int j = 1; j <= i; ++j) 
              {
                std::cout << ((j + 1) % 2);
              }
              std::cout << std::endl;
            }
          }
          std::cout << std::endl;
    }
}
