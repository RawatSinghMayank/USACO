#include<stdio.h>
#include<string.h>
typedef struct pokemon{
    char name[100];
  int hp;
  int speed;
  char tier[10];
  int attack;
}pokemon;
int main(){
    pokemon g={"mayankisg",100,200,"A2",500};
    printf("%s  %d  %d %s %d",g.name,g.hp,g.speed,g.tier,g.attack);
    return 0;}