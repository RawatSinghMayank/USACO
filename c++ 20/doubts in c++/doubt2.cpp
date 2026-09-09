#include <iostream>
int main()
{
    int i = 1, j = 1;
    int casee;
    std::cout << "enter case" << std::endl;
    std::cin >> casee;
    switch (casee)
    {
    case 1:
    {
        while (j <= 5)
        {
            std::cout << "mayank" << std::endl;
            j++;
        }
    }
    break;
    case 2:
    {
        while (j <=5)
        {
            std::cout << "mayank" << std::endl;
            ++j;
        }
        break;
    }
    case 3:
    {
        while (j <= 5)
        {
            std::cout << "mayank" << std::endl;
            j = ++i;
        }
        break;
    }
    case 4:
    {
        while (j <= 5)
        {  
            std::cout << "mayank" << std::endl;
             j = i++;
        }
        break;
    }
    }
    return 0;
}