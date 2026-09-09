// #include <stdio.h>
// int main(){
//     //Printing odd numbers between 1 to n
//     int n;
//     printf("Enter the value of n\n");
//     scanf("%d",&n);
//          printf("Odd numbers between 1 to n are:");
//      for(int i=1;i<=n;i++){
//         if(i%2==0){
//             continue;}
//      printf(" %d ",i);
//      }
// }
#include <stdio.h>
int main()
{
    printf("Enter any even number\n");
    int n;
    scanf("%d", &n);
    printf("Break statement in for loop for printing numbers less than the half of the number\n");
    
    for (int i = 1; i <= n; i++)
    {
        if (i == n / 2)
        {
            break;
        }
        else
        {
            printf(" %d ", i);
        }
    }
    return 0;
}
