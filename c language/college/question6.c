// #include <stdio.h>
// void main(){
//     int x=25,s=0;
//     while((x=x/2)>0)
//     s+=x;
//     printf("\n%d",s); //22 
// }

// // #include <stdio.h>
// // #include <ctype.h>
// // void main(){
// //     char clr='r';
// //     int c=0;
// //     switch(clr-32){
// //         case 'r':
// //         case 'b':
// //         case 'g':c++;
// //         break;
// //         default:printf("\n Invalid");
// //     }
// //     printf("\nCount:%d",++c);// Invalid
// //                              // Count:1

// }
// #include <stdio.h>
// void main(){
//     int a=-5,s=1;
//     for(;a;){
//         s+=a++;//-14
//     }
//     printf("\n%d",s);
// }
// #include <stdio.h>
// void main(){
//     int x=25,y=65,r;
//     do{
//         r=x%y;
//         x=y;
//         y=r; //5
//     }
//     while(r);
//     printf("\n%d",x);
// }