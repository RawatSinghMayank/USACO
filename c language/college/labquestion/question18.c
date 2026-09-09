// // // // #include <stdio.h>
// // // // int main(){
// // // //      int m,n,sum;
// // // //      int i,j;
// // // //     printf("Enter the value of m:");
// // // //     scanf("%d",&m);
// // // //     printf("Enter the value of n:");
// // // //      scanf("%d",&n);
 
 
// // // //     printf("Perfect numbers beteen m and n are:");
// // // //     for(i=m;i<=n;i++){
// // // //         sum=0;
// // // //         for( j=1;j<i;j++){
// // // //             if(i%j==0){
// // // //                 sum=sum+j;
// // // //             } }
// // // //             if(sum==i){
// // // //                 printf("%d ",i);
// // // //             }
// // // //     }
// // // //     return 0;}
              
// // //               #include <stdio.h>
// // //               int main(){
// // //                 printf("Enter the number of terms ");
// // //                 int n;
// // //                 scanf("%d",&n);
// // //                 float sum=0;
// // //                for(int i=1;i<=n;i++){
// // //                 if(i%2==0){
// // //                     sum=sum+((-1.0)/(i*i));
// // //                 }
// // //                 else {
// // //                     sum=sum+((1.0)/(i*i));
// // //                 }
// // //                }
// // //                printf("The sum of the given series is :%f",sum);
// // //                return 0;
// // //               }

// // #include <stdio.h>
// // int main(){
// //     printf("Enter the value of n:");
// //     int n;
// //     int sum=1;
// //     scanf("%d",&n);
// //     for(int i=0;i<n;i++){
// //         sum=sum+(i*(i+1));
// //     }
// //     printf("The sum of the given series is :%d",sum);
// //     return 0;}
// #include <stdio.h>
// int main(){
//     int array[10];
//     int i, j, num, temp, keynum;
//     int low, mid, high; 
//     printf("Enter the value of num \n");
//     scanf("%d", &num);
//     printf("Enter the elements one by one \n");
//     for (i = 0; i < num; i++)
//     {
//         scanf("%d", &array[i]);
//     }
//     printf("Input array elements \n");
//     for (i = 0; i < num; i++)
//     {
//         printf("%d\n", array[i]);
//     }

//     for (i = 0; i < num; i++)
//     {
//         for (j = 0; j < (num - i - 1); j++)
//         {
//             if (array[j] > array[j + 1])
//             {
//                 temp = array[j];
//                 array[j] = array[j + 1];
//                 array[j + 1] = temp;
//             }
//         }
//     }
//     printf("Sorted array is...\n");
//     for (i = 0; i < num; i++)
//     {
//         printf("%d\n", array[i]);
//     }
//     printf("Enter the element to be searched \n");
//     scanf("%d", &keynum);
    
//     low = 1;
//     high = num;
//     do
//     {
//         mid = (low + high) / 2;
//         if (keynum < array[mid])
//             high = mid - 1;
//         else if (keynum > array[mid])
//             low = mid + 1;
//     } while (keynum != array[mid] && low <= high);
//     if (keynum == array[mid])
//     {
//         printf("SEARCH SUCCESSFUL \n");
//     }
//     else
//     {
//         printf("SEARCH FAILED \n");
//     }
// }
