#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct Node{
    struct Node*next;
    int val;
}Node;
Node*createNode(int val){
    Node*x=(Node*)malloc(sizeof(Node));
   x->next=NULL;
   x->val=val;
   return x;}


   Node*mergeList(Node*l1,Node*l2){
    Node*dummy=createNode(-1);
    Node*temp=dummy;
    while(l1 && l2){
     if(l1->val<=l2->val){
        temp->next=l1;
        temp=temp->next;
        l1=l1->next;
     }
     else {
        temp->next=l2;
        temp=temp->next;
        l2=l2->next;
     }
    }
 if(l1!=NULL){
    temp->next=l1;
 }
 else{
    temp->next=l2;
 }
return dummy->next;
   }


Node*createList(Node*head,int val){
    Node*x=createNode(val);
    if(head==NULL){
        head=x;
    }
    else {
       Node*temp=head;
       while(temp->next){
        temp=temp->next;
       }
       temp->next=x;
    }

    return head;
}

void display(Node*head){
    while(head){
        printf("%d ",head->val);
        head=head->next;
    }
}
   int main(){
    Node*head1=NULL,*head2=NULL;
    head1=createList(head1,10);
     head1=createList(head1,15);
      head1=createList(head1,34);
     head1=createList(head1,34);

      head1=createList(head1,343);

      display(head1);

    head2=createList(head2,-1);
    head2=createList(head2,0);

    head2=createList(head2,1);
    head2=createList(head2,34);
    head2=createList(head2,3535);

display(head2);


Node*newhead=mergeList(head1,head2);
display(newhead);


   }