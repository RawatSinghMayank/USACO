// #include<stdio.h>
// int main(){
//     int n,m;
//     printf("enter rows and coloumns");
//     scanf("%d%d",&n,&m);
//     int a[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//      for(int i=0;i<n;i++){            // matrix print
//         for(int j=0;j<m;j++){
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
//     int minr=0;
//     int maxr=n-1;
//     int minc =0;
//     int maxc=m-1;
//     int tne=m*n;
//     int count=0;
//     while(tne>count){
//         for(int j=minc;j<=maxc;j++){
//             printf("%d ",a[minr][j]);
//             count++;
//         }
//         minr++;
//         if(count>=tne) break;
//         for(int i=minr;i<=maxr;i++){
//             printf("%d ",a[i][maxc]);
//             count++;
//         }
//         maxc--;
//         if(count>=tne) break;
//         for(int j=maxc;j>=minc;j--){
//             printf("%d ",a[maxr][j]);
//             count++;
//         }
//         maxr--;
//         if(count>=tne) break;
//         for(int i=maxr;i>=minr;i--){
//             printf("%d ",a[i][minc]);
//             count++;
//         }
//             minc++;
        
//     }
//     return 0;
// }