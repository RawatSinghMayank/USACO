#include<stdio.h>
#include<string.h>
int main(){
    char ch[10000];
    printf("enter the string ");
    gets(ch);
    puts(ch);
    int n=strlen(ch);
    for(int i=0;i<n;i++){
        if(  ch[i]=='a' && ch[i+1]=='n' && ch[i+2]==' ' ){
          
ch[i]=-1;
ch[i+1]=-1;
ch[i+2]=-1;}
        
        if( ch[i]=='a' && ch[i+1]==' '){  


            ch[i]=-1;
            ch[i+1]=-1;
            }
            if( ch[i]=='t' && ch[i+1]=='h' && ch[i+2]=='e' && ch[i+3]==' '){
            

                ch[i]=-1;
            ch[i+1]=-1;
            ch[i+2]=-1;
            ch[i+3]=-1;}
    }
    for(int i=0;i<n;i++){
        if(ch[i]!=-1)
        printf("%c",ch[i]);
    }
}