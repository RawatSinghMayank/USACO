#include <stdio.h>
void deletion(int arr[],int n){
    printf("\nenter the index of the element you want to delete ");
int idx;
scanf("%d",&idx);
for(int i=idx;i<n-1;i++){
    arr[i]=arr[i+1];}
}
void insert(int arr[],int n){
printf("\nenter the index at which you want to insert the element ");
int idx;
scanf("%d",&idx);
printf("\nenter the element ");
int x;
scanf("%d",&x);
for(int i=n-1;i>idx;i--){
    arr[i]=arr[i-1];}
arr[idx]=x;}
void exit1(int arr[],int n){
return;}
int main(){
printf("\nenter the total number of elements in the array ");
int n;
scanf("%d",&n);
int arr[n+1];
printf("\nenter the elements in the array ");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);}
printf("\nPress 1 for insertion in the array \n Press 2 for deletion in the array \n Press 3 to exit from the array \n");
 int press;
 scanf("%d",&press);
 switch(press)
 { case 1:{
 printf("\nElements before inserting ");
 for(int i=0;i<n;i++){
printf("%d  ",arr[i]);}
insert(arr,n+1);
printf("\nElements after inserting ");
    for(int i=0;i<n+1;i++){
printf("%d  ",arr[i]);}
break;}
    case 2:{
     printf("\n Elements before deletion ");
    for(int i=0;i<n;i++){
printf("%d  ",arr[i]);}
    deletion(arr,n);
    printf("\n Elements after deletion ");
    for(int i=0;i<n-1;i++){
printf("%d  ",arr[i]);}
break;}
case 3:{
    printf("\n Exiting from the array ");
exit1(arr,n);
break;}
default:{
    printf("\n wrong choice");
break;}
return 0;}}