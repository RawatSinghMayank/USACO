#include <stdio.h>

int main(){
    printf("Enter no of characets :");
    int n;
    scanf("%d",&n);
    char arr[n];
    printf("enter the elements ");
    for(int i=0;i<n;i++){
         getchar(); scanf("%c",&arr[i]);
       
    } int c=0,d=0,e=0;
    for(int i=0;i<n;i++){
        if((arr[i]>=65 && arr[i]<=90 ) || (arr[i]>=97 && arr[i]<=122))
        c++;
        else if(arr[i]>=48 && arr[i]<57)
        d++;
        else e++;
    }
    
        printf("Frequency of alphabets if %d , frequnecy of numberss is %d , frquency of specialsymbols if %d ",c,d,e);}
