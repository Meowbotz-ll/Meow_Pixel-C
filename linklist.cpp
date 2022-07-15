#include <iostream>
using namespace std;
using LL=long long int;
struct Node{
int data;
Node *next;
Node *prev;
};

void ins_head(Node *&head,Node *&tail,int data){
if(head==nullptr){
	Node *nNode=new Node;
	nNode->data=data,nNode->next=nNode->prev=nullptr;
	head=tail=nNode;
}
else{
Node *nNode=new Node;
Node *pre=head->prev;

nNode->data=data;
nNode->prev=pre;
nNode->next=head;
head->prev=nNode;
head=nNode;
}
}

void output(Node *& head,Node *& tail){
if(head==nullptr){return;}
	for(Node *ptr=head;ptr!=nullptr;ptr=ptr->next){
	cout<<ptr->data<<" ";
}
return;
}

int main(){
	int q;
	cin>>q;
	Node *head=nullptr;
	Node *tail=nullptr;
	while(q--){
		string op;
		cin>>op;
		if(op=="IH"){
			int i;
			cin>>i;
			ins_head(head,tail,i);
		}else if(op=="O"){
			output(head,tail);
		}
	}
return 0;
};
