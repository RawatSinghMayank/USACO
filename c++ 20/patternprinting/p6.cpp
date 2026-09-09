#include <iostream>
int main()
{

    int n;
    std::cin >> n;
    if(n%2==0){ std::cout<<"wrong input"<<std::endl;}
    // only for odd numbers
    
    for (int i = 1; i <= n; i++)
    { 
        for (int j = 1; j <= n; j++)
        {
            int a = (n / 2) + 1;
            if (i == a || j == a)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
    return 0;
}