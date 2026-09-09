#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("enter the value of number\n");
    scanf("%d", &n);
   float new=0;
    int n1 = 0;
    int length = 0;
    int count = 0;
    while(n>0){
        n=n/10;
        count++;
       
    }
int arr[count];

    while (n > 0)
    {
        
        for(int i=0;i<arr[count];i++){ 
      n1 = n % 10;
        n = n / 10;
            arr[i]=n1;
            printf("%d",arr[i]);
        }}}
//         for(int j=0;j<arr[count];j++){
// new=new+arr[j]*pow(10,(count-(j+1)));
//         }
//         printf("%f",new);
//         return 0;}
