#include<stdio.h>
#include<string>
using namespace std;
struct Node{
	Node* lchild;
	Node* rchild;
	int c;
}Tree[50];
int loc=0;
Node *create(){
	Tree[loc].lchild=Tree[loc].rchild=NULL;
	return &Tree[loc++];
}
void postOrder(Node* T){
	if(T->lchild!=NULL) postOrder(T->lchild);
	if(T->rchild!=NULL) postOrder(T->rchild);
	printf("%d",T->c);
}
void inOrder(Node* T){
	if(T->lchild!=NULL) inOrder(T->lchild);
	printf("%d",T->c);
	if(T->rchild!=NULL) inOrder(T->rchild);
}
void preOrder(Node* T){
	if(T->lchild!=NULL) preOrder(T->lchild);
	printf("%d",T->c);
	if(T->rchild!=NULL) preOrder(T->rchild);
}
Node *Insert(Node* T,int x){
	if(T==NULL){
		T=create();
		T->c=x;
		return T;
	}
	if(x<T->c) T->lchild=Insert(T->lchild,x);
	if(x>T->c) T->rchild=Insert(T->rchild,x);
	return T;
}
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		Node* T=NULL;
		for(int i=0;i<n;i++){
			int x;
			scanf("%d",&x);
			T=Insert(T,x);
		}
		postOrder(T);
		printf("\n");
		inOrder(T);
		printf("\n");
		preOrder(T);
		printf("\n");
	}
	return 0;
}