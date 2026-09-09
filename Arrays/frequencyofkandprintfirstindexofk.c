// #include  <stdio.h>
// int main(){
//     printf("enter the no of elements in the array ");
// int n;
// scanf("%d",&n);

// int arr[n];
// printf("enter elements");
// for(int i=0;i<n;i++){
//     scanf("%d",&arr[i]);
// }
// printf("enter the k");
// int c=0, k;
// int location=0;
// scanf("%d",&k);
// for(int i=0;i<n;i++){
//     if(arr[i]==k){
//         c++;
//         if(c==1){
//             location=i;}
//         }
// }
// if(c>0){
// printf("frequency of k is %d and the index at which it is first found is %d",c,location);
// }
// else {
//     printf("element not found ");
// }
// return 0;}


// Last index

#include  <stdio.h>
int main(){
    printf("enter the no of elements in the array ");
int n;
scanf("%d",&n);

int arr[n];
printf("enter elements");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("enter the k");
int c=0, k;
int location=0;
scanf("%d",&k);
for(int i=n-1;i>=0;i--){
    if(arr[i]==k){
        c++;
        if(c==1){
            location=i;}
        }
}
if(c>0){
printf("frequency of k is %d and the index at which it is last found is %d",c,location);
}
else {
    printf("element not found ");
}
return 0;}