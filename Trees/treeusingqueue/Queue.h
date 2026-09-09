struct Node{
    int data;
    struct Node*lchild, *rchild;
};
typedef struct Node Node;

struct Queue{
    int size;
    int front;
    int rear;
    Node **Q;
};
Queue* create(int size){
    Queue*q=(Queue*)malloc(sizeof(Queue));
     q->size=size;
    q->Q=(Node*)malloc(q->size*sizeof(Node*));
    q->front=q->rear=-1;
}


void enqueue(Queue* q, Node*value) {
    if((q->front==0 && q->rear==q->totalsize-1) || (q->rear+1==q->front))return ;
    if(q->front==-1){
        q->front=q->rear=0;
    }
    else if(q->front!=0 && q->rear==q->totalsize-1){
        q->rear=0;
    }
    else (q->rear)++;
    q->Q[q->rear]=value;

}

Node* dequeue(Queue* q) {
    if(q->front==-1)return NULL;
    Node*x=NULL;
    if(q->front==q->rear)q->front=q->rear=-1;
    else if(q->front==q->totalsize-1)q->front=0;
   else  (q->front)++;
    return x;
}

bool isEmpty(Queue*q){
    return q->front==-1;
}