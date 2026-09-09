#include <iostream>
int main()
{
    int n;
    std::cin >> n;
    if (n % 2 == 0)
    {
        std::cout << "wrong input" << std::endl;}

        int x = 1;
        int ml = n / 2 + 1;
        int nos = ml - 1;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= nos; j++)
            {
                std::cout << " "
                          << " ";
            }
            for (int k = 1; k <= x; k++)
            {
                std::cout << "*"
                          << " ";
            }
            if (i < ml)
            {
                nos--;
                x = x + 2;
            }
            else
            {
                nos++;
                x = x - 2;
            }
            std::cout << std::endl;
        }
        return 0;
    }