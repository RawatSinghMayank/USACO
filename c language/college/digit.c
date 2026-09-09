//Program to input a character from the keyboard and check whether it is a digit ,alphabet or a symbol.
#include <stdio.h>
int main(){
    printf("Enter the character:");
    char ch;
    scanf("%c",&ch);
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')){
        printf("Entered character is alphabet");
    }
    else if( ch>='0' && ch<='9' ){
        printf("Entered character is digit");}
        else {
            printf("Entered character is special symbol ");
        }
        return 0;}