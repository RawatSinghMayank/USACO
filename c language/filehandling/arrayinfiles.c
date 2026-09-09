#include<stdio.h>
#include<stdlib.h>
int main(){
FILE *ptr1;
// ptr1=fopen("g.txt","wb");      // niche waala chlane ke liye phale ye chlna padega
// if(ptr1==NULL)exit(1);
// int arr[10];
// for(int i=0;i<10;i++)
// scanf("%d",&arr[i]);
// fwrite(arr,sizeof(int),10,ptr1);
// fclose(ptr1);
// return 0;}
ptr1=fopen("g.txt","rb");
if(ptr1==NULL)
exit(1);

int arr[10];
fread(arr,sizeof(int),10,ptr1);
for(int i=0;i<10;i++)
printf("%d",arr[i]);
fclose(ptr1);
return 0;}
