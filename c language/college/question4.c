#include <stdio.h>
int main()
{
    char ch;
    int n;
    int a = 0, e = 0, i = 0, o = 0, u = 0;
    printf("Enter the stream of characters\n");
    do
    {
        scanf("%d", &n);

        scanf("%c", &ch);
        if (ch == 'a' || ch == 'A')
        {
            a++;
        }
        if (ch == 'e' || ch == 'e')
        {
            e++;
        }
        if (ch == 'i' || ch == 'i')
        {
            i++;
        }
        if (ch == 'o' || ch == 'o')
        {
            o++;
        }
        if (ch == 'u' || ch == 'u')
        {
            u++;
        }
    } while (n != -1);
    printf("A-%d times\n", a);
    printf("E-%d times\n", e);
    printf("I-%d times\n", i);
    printf("O-%d times\n", o);
    printf("U-%d times\n", u);
    return 0;
}