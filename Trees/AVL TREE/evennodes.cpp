 #include<bits/stdc++.h>
using  namespace std;
class Node{
public:
Node*next;
int val;
Node(){}
Node(int val){
next=NULL;
this->val=val;
}
};

Node*createList(Node*head,int val){
if(head==NULL){
head=new Node(val);
}
else{
Node*temp=head;
while(temp->next)
{
temp=temp->next;
}
temp->next=new Node(val);

}
return head;
}

void display(Node*head)
{
while(head){
cout<<head->val<<" ";
head=head->next;
}
cout<<endl;
}

Node*removeEvenNode(Node*head){
Node*dummy=new Node(-1);
Node*temp=dummy;
while(head!=NULL){
if(head->val%2==1){
temp->next=head;
head=head->next;
temp=temp->next;
}
else{
Node*toDelete=head;
head=head->next;
delete toDelete;
}

}
temp->next=NULL;
return dummy->next;
}

int main(){
Node*head=NULL;
int n;
cin>>n;
for(int i=0;i<n;i++){
int x;
cin>>x;
head=createList(head,x);
}
cout<<"Before removing "<<endl;
display(head);
cout<<"After removing even Nodes"<<endl;
head=removeEvenNode(head);
display(head);
return 0;
}
