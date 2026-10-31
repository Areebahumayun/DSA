#include<iostream>
using namespace std;
class node{
	int data;
	node* left;
	node* right;
	node(int d){
		this->data=d;
		this->left=nullptr;
		this->right=nullptr;
	}
}
Node* buildtree(Node* root){
	int data;
	cout<<"enter the data"<<endl;
	if(data==-1){
		return nullptr;
	}
	root=new Node(data);
	cout<<"enter the data in left node"<<endl;
	root->left=buildtree(root->left);
	cout<<"enter the data in right node"<<endl;
	root->right=buildtree(root->right);
	
}