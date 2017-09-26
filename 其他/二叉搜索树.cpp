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
char str1[100];
char str2[100];
int size1=0;
int size2=0;
char str[100];
int size=0;
void postOrder(Node* T){
	if(T->lchild!=NULL) postOrder(T->lchild);
	if(T->rchild!=NULL) postOrder(T->rchild);
	str[size++]=T->c;
}
void inOrder(Node* T){
	if(T->lchild!=NULL) inOrder(T->lchild);
	str[size++]=T->c;
  	if(T->rchild!=NULL) inOrder(T->rchild);
}
Node *insert(Node* T,char x){
	if(T==NULL) {
		T=create();
		T->c=x;
		return T;
	}else if(x<T->c) T->lchild=insert(T->lchild,x);
	else if(x>T->c) T->rchild=insert(T->rchild,x);
	return T;
}
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		if(n==0) break;
		char tmp[100];
		scanf("%s",tmp);
		Node* T=NULL;
		int i=0;
		while(tmp[i]!='\0'){
			T=insert(T,tmp[i]);
			i++;
		}
		postOrder(T);
		inOrder(T);
		str[size]=0;
		strcpy(str1,str);
		while(n--!=0){
			scanf("%s",&tmp);
			Node* T2=NULL;
			i=0;
			while(tmp[i]!='\0'){
				T2=insert(T2,tmp[i]);
				i++;
			}
			size=0;
			postOrder(T2);
			inOrder(T2);
			str[size]=0;
			strcpy(str2,str);
			printf(strcmp(str1,str2)==0?"YES\n":"NO\n");
		}
	}
	return 0;
}