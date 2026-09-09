#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool check(char ch1[],char ch2[]){
int n1=strlen(ch1);
int n2=strlen(ch2);
int a=0;
int count=0;
for(int i=0;i<n1;i++){
    if(ch1[i]==ch2[0]){
        count++;
        while(a<n2){
            if(ch1[i++]!=ch2[a++]){
                return false;}
        }
    }

}
if(count==0)return false;
return true;}
int main(){
char ch1[100000];
char ch2[10000];
printf("enter the string :");gets(ch1);
printf("\n enter the substring :");
gets (ch2);

int ans=check(ch1,ch2);
if(ans){
    printf("Substring is present ");
}
else printf("Substring is not present ");
}