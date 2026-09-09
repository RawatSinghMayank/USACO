#include <stdio.h>
int fact(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}

int main()
{
    int result = 0;
    printf("enter the number of rows you want to print \n");
    int n;
    scanf("%d", &n);
    int a = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            result = (fact(i)) / (fact(k) * fact(i - k));
            printf("%d ", result);
        }
        a--;
        printf("\n");
    }
    return 0;
}
