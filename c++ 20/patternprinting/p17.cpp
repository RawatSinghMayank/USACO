
#include <iostream>
int main()
{
int i;int ss;
    int n;
    std::cin >> n;
    
    for (i = 1; i <= n; i++)
    { ss=i-1;
        for (int x = 1; x <= n - i; x++)
        {
            std::cout << " ";
        }
        for (int y = 1; y <= i; y++)
        {
            std::cout << y;
        }
        for (int z = 1; z <= i - 1; z++)
        {
         std::cout<<ss;
          ss--;}
        std::cout << std::endl;
    }
    return 0;
}