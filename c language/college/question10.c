// #include <stdio.h>
// void main(){
//     int a=-1,c=1;
//     if(++a)
//     printf("Hello");
//     c=c+a;
//     printf("\n%d %d",a,c);  //0  1
// }
// #include <stdio.h>
// void main(){
//     int True=0;
//     do{
//         printf("\n C is great");//C is great
//     }
//     while(True);
// }
// #include <stdio.h>
// void main(){
//     int x=3,y=-1,z;
//     while(x>=0){
//         if(x--==y++)
//         break;
//         else   // 2 0
//                // 1 1
//         printf("\n%d %d",x,y);
//     }
// }
#include <stdio.h>
void main(){
    int i;   //2
    
    for(i=0;i++<1;);
    printf("\n%d\n",i);
}