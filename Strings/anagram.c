#include<stdio.h>
#include<string.h>
#include<stdbool.h>

// void sort(char ch[]){
//     int n=strlen(ch);
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-1-i;j++){
//             if(ch[j]>ch[j+1]){
//                 int temp=ch[j];
//                 ch[j]=ch[j+1];
//                 ch[j+1]=temp;}
//         }
//     }
// }

//  bool check(char ch1[],char ch2[]){
// int n1=strlen(ch1);
// int n2=strlen(ch2);
// if(n1!=n2)return false;

// sort(ch1);
// sort(ch2);
// for(int i=0;i<n2;i++){
//     if(ch1[i]!=ch2[i]){
//         return false;}}
//         return true;}
    
    int  check(char ch1[],char ch2[]){

    char alpha[26]={0};
int n1=strlen(ch1);
int  n2=strlen(ch2);
if(n1!=n2) return 0;
for(int i=0;i<n1;i++){
   
    alpha[ch1[i]-97]=  alpha[ch1[i]-97]+1;
    alpha[ch2[i]-97]=  alpha[ch2[i]-97]-1;
}
for(int i=0;i<26;i++){
    if(alpha[i]!=0)return false;}
    return true;}



    
    int main(){

char ch1[10000];
char ch2[10000];
gets(ch1);
gets (ch2);
// sort(ch1);
// sort(ch2);
// puts(ch1);
// puts(ch2);
printf("%d",check(ch1,ch2));
    }


