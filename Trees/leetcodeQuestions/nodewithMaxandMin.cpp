// C++ program to find maximum and
// minimum in a Binary Tree
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// A tree node
class Node {
public:
	int data;
	Node *left, *right;

	/* Constructor that allocates a new
	node with the given data and NULL
	left and right pointers. */
	Node(int data)
	{
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};

// Returns maximum value in a given
// Binary Tree
int findMax(Node*root){
    if(root==NULL)return 0;
    int lMax=findMax(root->left);
    int rMax=findMax(root->right);
        return max(root->data,max(lMax,rMax));
}


// Driver Code
int main()
{
	Node* NewRoot = NULL;
	Node* root = new Node(2);
	root->left = new Node(7);
	root->right = new Node(-3233);
	root->left->right = new Node(6);
	root->left->right->left = new Node(43);
	root->left->right->right = new Node(3);
	root->right->right = new Node(9);
	root->right->right->left = new Node(4);

	// Function call
	cout << "Maximum element is " << findMax(root) << endl;

	return 0;
}

// This code is contributed by
// rathbhupendra
