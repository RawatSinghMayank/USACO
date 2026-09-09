#include<stdio.h>
#include<string.h>
typedef union pokemon{
    char name[100];
  int hp;
  int speed;
  char tier[10];
  int attack;
}pokemon;
int main(){
  pokemon g;
strcpy(g.name,"mayank");
g.hp=100;
g.speed=1220;
strcpy(g.tier,"a2");
g.attack=65;
    printf("%s  %d  %d %s %d",g.name,g.hp,g.speed,g.tier,g.attack);
    return 0;}