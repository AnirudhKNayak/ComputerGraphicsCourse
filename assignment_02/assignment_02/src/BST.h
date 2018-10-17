#pragma once
struct Node {
	int data;
	Node* left;
	Node* right;
	Node();
	Node(int);
};
class BST {
public:
	BST();
	Node* root;
	int insert(int x);
	void print();
	void deleteNode(int x);
	Node* findNode(int x);
	Node* findMax();

private:
	void print__private(Node* node);
	Node* findMax__private(Node* node);
	Node* deleteNode__private(Node* node, int x);
};

