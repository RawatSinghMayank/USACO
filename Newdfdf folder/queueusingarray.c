#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct queue{
    int front, rear;
    int size;
    int *arr;
}queue;

queue*createQueue(int size){
queue *q=(queue*)malloc(sizeof(queue));
q->size=size;
q->arr=(int*)malloc(sizeof(int)*q->size);
q->front=q->rear=-1;
return q;}

void enqueue(queue*q,int val){
    if(q->rear==q->size-1)return;
     if(q->front==-1){
        q->front=q->rear=0;
    }
    else {
        (q->rear)++;
    }
    q->arr[q->rear]=val;

}

int dequeue(queue*q){
    if(q->front==-1 || q->front>q->rear)return -1;
    int val=q->arr[q->front];
   if(q->front==q->rear){
    q->front=q->rear=-1;
   }
   else (q->front)++;
    return val;
}

bool isEmpty(queue*q){
 if(q->front==-1 || q->front>q->rear) return true;
 return false;
}

void display(queue*q){
    if(isEmpty(q)){
        return;
    }
for(int i=q->front;i<=q->rear;i++){
    printf("%d ",q->arr[i]);
}
}

int main(){
    int size;
    scanf("%d",&size);
    queue*q=createQueue(size);
    int choice;
    do{
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1:{
             int ele;
             scanf("%d",&ele);
             enqueue(q,ele);
             display(q);
             break;
            }
            case 2:{
                printf("%d ",dequeue(q));
                printf("n iggga");display(q);
            break;}
        }

    }while(choice!=3);
}