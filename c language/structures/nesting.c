#include<stdio.h>
#include<string.h>
typedef struct pokemon{
    char name[100];
  int hp;
  int speed;
  char tier[10];
  int attack;
}pokemon;
typedef struct legendary{
    pokemon nest;
    char ability[10];}legendary;
int main(){
    int n;
scanf("%d",&n);
getchar();
legendary e[n];
for(int i=0;i<n;i++){
fgets(e[i].nest.name,100,stdin);
scanf("%d",&e[i].nest.hp);
scanf("%d",&e[i].nest.speed);
getchar();
fgets(e[i].nest.tier,10,stdin);
scanf("%d",&e[i].nest.attack);
getchar();
fgets(e[i].ability,10,stdin);
}
printf("g");
printf("\n");

for(int i=0;i<n;i++)
printf("%s   %d   %d   %s   %d  %s",e[i].nest.name,e[i].nest.hp,e[i].nest.speed,e[i].nest.tier,e[i].nest.attack,e[i].ability);
return 0;
}

