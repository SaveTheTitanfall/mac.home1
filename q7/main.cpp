#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    std::cout<<"hey u , this my game random number 0-50 i will help u , -1 = u exit";
    std::srand(std::time(nullptr));
    const int GeneratingRange = 50;
    const double a = std::rand() % (GeneratingRange + 1); //0 - 50
    int  zna , pop = 1 , mpop = 1 , ty = 0 ;
    while(true)
    {
        std::cin >> zna;
        if ( zna == -1 )
        {
            return 0;
        }
        if ( zna == a)
        {
            if ( ty == 0)
            {
                mpop = pop;
                ty++;
            }
            else
            {
                mpop = std::min ( mpop , pop);
                ty++;
            }
            std::cout << "molodec ty ugadal tvoi poputki " << pop << std::endl;
            std::cout << " lychshya " << mpop << std::endl ;
            pop = 1;
        }
        if (a + 1 <= zna && zna <=50 && zna >= 0)
        {
            if (a + 11 <= zna && zna <=50 && zna >= 0)
            {
                std::cout << " na 20 ne ygadal v + "<< std::endl;
                pop++;
                continue;
            }
            std::cout << " na 10 neugadal v + "<< std::endl;
            pop++;
        }
        if ( a - 1 >= zna&& zna <= 50 && zna >= 0)//esly menshe b shto est zna vvod
        {
            if( a - 11 > zna && zna <= 50 && zna >= 0)
            {
                std::cout << "na 20 ne ugadal v - "<< std::endl;
                pop++;
                continue;
            }
            std::cout << " na 10 ne ugadal v -"<< std::endl;
            pop++;
        }
        if ( zna >= 51 || zna <=-1 )
        {
            std::cout << "chislo bolshe / menshe chem mozhna"<< std::endl;
        }
    }
    return 0;
}
