#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct Node{
struct Node*next;
int val;
}Node;
typedef struct stack{
    Node*top;
}stack;

stack*createStack(){
    stack*st=(stack*)malloc(sizeof(stack));
    st->top=NULL;
return st;
}

Node*createNode(int val){
    Node*x=(Node*)malloc(sizeof(Node));
    x->val=val;
    x->next=NULL;
    return x;
    }

void push(stack*st,int val){
Node*x=createNode(val);
if(st->top==NULL){
    st->top=x;
}
else {x->next=st->top;
st->top=x;
}
}

int pop(stack*st){
    if(st->top==NULL)return -1;
    return st->top->val;
}

bool isEmpty(stack*st){
    return st->top==NULL;
}

void display(stack*st){
    Node*temp=st->top;
    while(temp){
        printf("%d ",temp->val);
        temp=temp->next;
    }

}
int longestValidParentheses(char* s) {
    stack*st=createStack();
    push(st,-1);
    int n=strlen(s);
    int ans=0;
    for(int i=0;i<n;i++){
     if(st->top!=-1  && s[st->top->val]=='(' &&  s[i]==')'){
       pop(st);
       if(st->top->val-i>ans){
        ans=st->top->val-i;
       }
     }
     else {
    push(st,i);
     }
    }
    return ans;



    }
int main(){
char ch[10000];
gets(ch);
printf("%d ",longestValidParentheses(ch));
return 0;}