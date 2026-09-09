#include<stdio.h>
#include<string.h>
typedef struct pokemon{
   char name[100];
   int power;
}pokemon;
void change(pokemon* g){
strcpy((*g).name,"mayankisg");
(*g).power=200;
return;}
int main(){
    pokemon g;
    pokemon*ptr=&g;
    strcpy(g.name,"pikachu");
    g.power=100;
    printf("%s",g.name);
    printf("\n");
    printf("%d",g.power);
    change(&g);
    printf("%s",g.name);
    printf("\n");
    printf("%d",g.power);
    return 0;}