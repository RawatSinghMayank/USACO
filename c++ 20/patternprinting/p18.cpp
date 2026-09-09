
#include <iostream>
int main()
{
int i;char ss;
    int n;
    std::cin >> n;
    
    for (i = 1; i <= n; i++)
    { ss=(i+64)-1;
        for (int x = 1; x <= n - i; x++)
        {
            std::cout << " ";
        }
        for (char y = 65; y <= i+64; y++)
        {
            std::cout << y;
        }
        for (char z = 65; z <= (i+64)- 1; z++)
        {
         std::cout<<ss;
          ss--;}
        std::cout << std::endl;
    }
    return 0;
}