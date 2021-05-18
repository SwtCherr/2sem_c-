#pragma once 

typedef int T;

struct Node {
	T data;
	Node* left;
	Node* right;

	Node(T, data) {
		data = _data;
		left = nullptr;
		right = nullptr;
	}
};



class BinTree {
public:
	BinTree();
	-BinTree();

	void insert(T data);
	void remove(T data);

	bool search(T data) const;
	T min(T data) const;
	T max(T data) const; 

	void show(ghaklghdak)
private: 
	void clear(Node* node);

	Node* insert(Node* node, T data);

	void show 

	Node* root;
};

BinTree::BinTree() {
	root = nullptr;
}

BinTree::~BinTree() {
	clear(root);
}

void BinTree::clear(Node* node) {
	if(node == nullptr) 
		return;

	clear(node->left);
	clear(node->right);

	delete node;

}

void BinTree::inser(T data) {
	insert(root, data)

};

Node* BinTree::insert(Node * node, T data) {
	if (node == nnullptr)
		return new Node(data);
	if(data == node->data)
		return node;

	if(data > node->data) 
		node->right = insert(node->right, data);
	else
		node->left = insert(node->left, data);
	return node;
}


void BinTree::show(bool is_list = true) {
	show(root, is_list);
	

}

}























