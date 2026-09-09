#ifndef q_h
#define q_h
typedef struct  TreeNode{
    struct TreeNode*left,*right;
    int val;
}TreeNode;

typedef struct queue{
    TreeNode**arr;
    int front,rear,size;
   
}Queue;

TreeNode*createTreeNode(int val){
    TreeNode*temp=(TreeNode*)malloc(sizeof(TreeNode));
    temp->val=val;
    temp->left=temp->right=NULL;
    return temp;
}
Queue*createQueue(int size){
    Queue*q=(Queue*)malloc(sizeof(Queue));
    q->size =size;
    q->front=q->rear=-1;
    q->arr=(TreeNode**)malloc(sizeof(TreeNode*)*q->size);
    return q;
}

void enqueue(Queue*q,TreeNode* val){
    if(q->front==q->size-1)return ;
    else if(q->front==-1){
        q->front=q->rear=0;
    }
    else if(q->front!=0 && q->rear==q->size-1){
        q->rear=0;
    }
    else (q->rear)++;
    q->arr[q->rear]=val;
}

TreeNode* dequeue(Queue*q){
    if(q->front==-1)return NULL;
    TreeNode* x=q->arr[q->front];
     if(q->front==q->rear){
       q->front=q->rear=-1;
    }
    else if(q->front==q->size-1){
        q->front=0;
    }
    else (q->front)++;
    return x;
}

bool isEmpty(Queue*q){
    return q->front==-1;
}

#endif