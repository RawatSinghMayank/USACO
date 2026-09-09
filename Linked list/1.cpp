#include<bits/stdc++.h>
using namespace std;
//linked list are stored in heap memory. Heap memory is the place where dynamic memory allocation take place.

// Allocate memory at runtime on the Heap.
// Deallocate memory when it's no longer needed.
// Dynamic memory allocation is useful when the required memory size cannot be determined during compile time.

//we can store integer, double, characters, etc in linked list only diff is they are not in contiguous memory

//starting point = head, ending point = tail
//link actually means storing the next node address
//use of linked list-stack and queue implementation,browser(doubly linked list)

class ListNode {
	
public:
	int val;
	ListNode* next;
	
	ListNode(int val, ListNode* next){
		this->val = val;
		this->next = next;
	}
	
	ListNode(int val){
		this->val = val;
		this->next = nullptr;
	}
};

ListNode* arrayToListNode(vector<int> &nums){
		
	ListNode* head = new ListNode(nums[0]);
	ListNode* temp = head;
	for (int i = 1; i < nums.size(); i++){
	
		temp->next = new ListNode(nums[i]);
		temp = temp->next;
	}	
	return head;
}
	
void displayListNode(ListNode* head){
		
	while (head != nullptr){
		cout << head->val << " ";
		head = head->next;
	}	
}


//memory used = 4bytes for interger + 8bytes for pointer = 12bytes
int main(){
	
	// int x = 10;
	// int *y = &x;
	// int **z = &y;
	// cout << (*y) <<endl << y <<endl << x << *z << endl << **z<< endl;
	
	// in singly linked list we are storing 2 things in the node : 1) data 2)pointer to next 	
	
	ListNode* head = new ListNode(0);
	cout << head << endl << head->val << endl << (*head).val << endl;
												//(*head) is actual node data structure
												
	ListNode x = ListNode(2);
	cout << x.val << endl << x.next << endl;

	vector<int> nums = {1,2,3,3,4,5};
	ListNode* head2 = arrayToListNode(nums);
	displayListNode(head2);
	
	return 0;
}

// Node vs Node* in a linked list
// 1. Node (object / structure)

// Node is the actual data structure that stores:

// the data

// the pointer to the next node

// struct Node {
//     int data;
//     Node* next;
// };


// When you write:

// Node n;


// You create a real node object in memory.

// 2. Node* (pointer to Node)

// Node* is a pointer that stores the address of a Node.

// Node* ptr;


// It does NOT store the node itself — only where the node is located in memory.

// Why linked lists use Node* instead of Node

// Because:

// Nodes are created dynamically (using new)

// Nodes are connected using memory addresses

// We need pointers to move between nodes

// Example:

// Node* head = new Node();
// head->data = 10;
// head->next = nullptr;


// Here:

// head → pointer (Node*)

// *head → actual node (Node)

// Memory visualization
// head (Node*)
//    |
//    v
// +------------+
// | data = 10  |
// | next = 0   |   <-- No