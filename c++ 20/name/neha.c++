#include <iostream>
#include <iomanip>
int main()
{
    std::cout << "ENTER ANY NUMBER OF YOUR CHOICE GREATER THAN TWO(2):" << std::endl;
    int n;
    int a;
    std::cin >> n; 
    a = n;
    for (int i = 1; i <= n; i++)
    {std::cout<<std::setw(20);

        std::cout << "-";

        for (int k = 1; k <= i; k++)
        {
            std::cout << " ";
        }
        for (int j = 1; j <= 1; j++)
        {
            std::cout << "-";
        }
        for (int x = 1; x <= a; x++)
        {
            std::cout << " ";
        }
        a--;
        for (int k = 1; k <= 1; k++)
        {
            std::cout << "-";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;
  
     std::cout<<std::setw(20);
    for (int i = 1; i <= n + 3; i++)
    {
     
        std::cout << "-";
    }
    std::cout << std::endl; 
    for (int j = 1; j <= (n / 2) - 1; j++) 
    {std::cout<<std::setw(20);
        std::cout << "-" << std::endl;
    } std::cout<<std::setw(20);
    for (int x = 1; x <= n + 3; x++)
    {
        std::cout << "-";
    }  
    std::cout << std::endl;  
    for (int k = 1; k <= (n / 2) - 1; k++)
    { std::cout<<std::setw(20);
        std::cout << "-" << std::endl;
    } std::cout<<std::setw(20);
    for (int f = 1; f <= n + 3; f++)
    {
        std::cout << "-";
    }
    std::cout << std::endl;
    std::cout << std::endl; 
    std::cout<<std::setw(20);
    for (int x = 1; x <= n / 2; x++)
    {std::cout<<std::setw(20);
        for (int i = 1; i <= 1; i++)
        {
            
            std::cout << "-";
        } 
        for (int j = 1; j <= n + 1; j++)
        {
            std::cout << " ";
        } 
        for (int k = 1; k <= 1; k++)
        {
            std::cout << "-";
            std::cout << std::endl;
        }
    }std::cout<<std::setw(20);
    for (int f = 1; f <= n + 3; f++)
    {
        std::cout << "-";
    } 
    std::cout << std::endl;std::cout<<std::setw(20);
    for (int x = 1; x <= n / 2; x++)
    {std::cout<<std::setw(20);
        for (int i = 1; i <= 1; i++)
        {
            std::cout << "-";
        }
        for (int j = 1; j <= n + 1; j++)
        {
            std::cout << " ";
        }
        for (int k = 1; k <= 1; k++)
        {
            std::cout << "-";
            std::cout << std::endl;
        }
    }
    int ff = n;
    std::cout << std::endl;std::cout<<std::setw(20);
    for (int i = 1; i <= n; i++)
    { std::cout<<std::setw(17);
        for (int j = 1; j <= ff; j++)
        {
            std::cout << " ";
        }
        for (int k = 1; k <= 1; k++)
        {
            std::cout << "-";
        }
        if (i == n / 2 +1)
        {
            for (int i = 1; i <= n; i++)
            {
                std::cout << "-";
            }
        }
        if(i!=n/2+1){

        for (int l=2; l <= i; l++)
        {
            std::cout <<"  ";
        }

        for (int m = 1; m <= 1; m++)
        {
            std::cout << "-";
        }}
        ff--;
        std::cout << std::endl;
    }

    return 0;
}

