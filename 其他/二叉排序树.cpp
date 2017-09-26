#include<stdio.h>
#include<string.h>
struct Node{
	Node* lchild;
	Node* rchild;
	char c;
}Tree[100];
int loc=0;
Node *create(){
	Tree[loc].lchild=Tree[loc].rchild=NULL;
	return &Tree[loc++];
}
void postOrder(Node* T){
	if(T->lchild!=NULL) postOrder(T->lchild);
	if(T->rchild!=NULL) postOrder(T->rchild);
	printf("%c",T->c);
}
void inOrder(Node* T){
	if(T->lchild!=NULL) inOrder(T->lchild);
	printf("%c",T->c);
	if(T->rchild!=NULL) inOrder(T->rchild);
}
void preOrder(Node* T){
	printf("%c",T->c);
	if(T->lchild!=NULL) preOrder(T->lchild);
	if(T->rchild!=NULL) preOrder(T->rchild);
}
Node *insert(Node *T,char x){
	if(T==NULL){
		T=create();
		T->c=x;
		return T;
	}
	else if(x<T->c) T->lchild=insert(T->lchild,x);
	else if(x>T->c) T->rchild=insert(T->rchild,x);
	return T;
}
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		Node *T=NULL;
		for(int i=0;i<n;i++){
			int x;
			scanf("%d",&x);
			T=insert(T,x);
		}
		preOrder(T);
		printf("\n");
		inOrder(T);
		printf("\n");
		postOrder(T);
		printf("\n");
	}
	return 0;
}