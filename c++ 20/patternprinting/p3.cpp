#include <iostream>
int main()
{
    int n;
    std::cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (char c = 65; c <= 65 + n - 1; c++)
        {

            std::cout << c;
        }

        std::cout << std::endl;
    }
}