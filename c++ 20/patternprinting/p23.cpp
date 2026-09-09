#include <iostream>
int main()
{
    int a = 1;
    int n;
    std::cin >> n;
    int ss = (2 * n) - 1;
    int sss = n + 1;
    int b = n - 1;

    for (int j = 1; j <= (2 * n) - 1; j++)
    {
        std::cout << j;
    }
    std::cout << std::endl;
    for (int i = 1; i <= n; i++)
    {

        for (int k = 1; k <= b; k++)
        {
            std::cout << k;
        }
        b--;
        for (int l = 1; l <= a; l++)
        {
            std::cout << " ";
        }
        a = a + 2;
        for (int m = sss; m <= ss; m++)
        {
            std::cout << m;
        }
        sss++;
        std::cout << std::endl;
    }
    return 0;
}
