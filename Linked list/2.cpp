class Node {
    
public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = nullptr;
    }

    Node(int val, Node* next){
        this->val = val;
        this->next = next;
    }

};

class MyLinkedList {

public:
    MyLinkedList() {
        Node* head = nullptr;
    }
    
    int get(int index) {
        
        if (index < 0){
            return -1;
        }

        int pos = 0;
        Node* temp = head;
        while (temp != nullptr){
            if (pos == index){
                return temp->val;
            }
            pos++;
            temp = temp->next;
        }

        return -1;
    }
    
    void addAtHead(int val) {
        
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }
    
    void addAtTail(int val) {
        
        Node* temp = head;

        while (temp->next != nullptr){
            temp = temp->next;
        }

        temp->next = new Node(val);
    }
    
    void addAtIndex(int index, int val) {
        
        if (index == 0){
            Node* newNode = new Node(val);
            newNode->next = head;
            head = newNode;
            return;
        }

        Node* temp = head;
        int pos = 0;

        while (temp != nullptr){

            if (pos == index - 1){
                Node* nextNode = temp->next;
                Node* tempNode = new Node(val);
                temp->next = tempNode;
                tempNode->next = nextNode;
                break;
            }
            pos++;
            temp = temp->next;
        }

    }
    
    void deleteAtIndex(int index) {
        
        if (index == 0){
            head = head->next;
            return;
        }

        Node* temp = head;
        int pos = 0;
        while(temp != nullptr){

            if (pos == index - 1){
                Node* toDelete = temp->next;
                temp->next = temp->next->next;
                delete toDelete;
                break;
            }
            pos++;
            temp = temp->next;   
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */