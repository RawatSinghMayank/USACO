#include <stdio.h>
int main(){
int b[100];
printf("enter  the number of elements in the array\n");
int n;
scanf("%d",&n);
int a[n];
printf("enter the elements \n");
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
int c=1;
for(int i=0;i<n;i++){
    c=1;
    if(a[i]!=-1){
    for(int j=i+1;j<n;j++){
         if(a[i]==a[j]){
            c++;
          a[j]=-1;
         }
        }
    
    b[i]=c;}
}
for(int i=0;i<n;i++){
    if(a[i]!=-1){
    printf("frequency of %d is %d\n",a[i],b[i]);
    }
}
return 0;}