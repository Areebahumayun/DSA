#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
	Node(int val){
		data=val;
		next=nullptr;
	}
};
Node* insertatend(Node* head,int val){
	Node* newnode=new Node(val);
	if(head==nullptr){
		newnode->next=newnode;
		return newnode;
	}
		Node* temp=head;
	while(temp->next!=head){
		temp=temp->next;
	}
	temp->next=newnode;
	newnode->next=head;
	return head;
	
}
void printlist(Node* head){
	if(head==nullptr)
	return;
	Node* temp=head;
	do{
	 cout<<temp->data<<"->";
	 temp=temp->next;
	}
	while(temp!=head);
		cout<<"head"<<endl;
	
}
int main()
{
	Node* head=nullptr;
	head=insertatend(head,10);
	head=insertatend(head,20);
	printlist(head);
}





