#include<stdio.h>
#include<string.h>
void  con(char ch[],char *ch2){
    int n=strlen(ch);

    int a=0;
    for(int i=0;i<n;i++){
        if(ch[i]!='a' && ch[i]!='e' && ch[i]!='i' && ch[i]!='o' && ch[i]!='u'&&ch[i]!='A' &&ch[i]!='E' && ch[i]!='I' && ch[i]!='O' && ch[i]!='U')

ch2[a++]=ch[i];
    }
 

}
int main(){
    char ch[1000];
    char *ch2[2000];
gets(ch);
con(ch,&ch2);
for(int i=0;i<strlen(ch2);i++){
    printf("%c",ch2[i]);
} }