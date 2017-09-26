#include<stdio.h>
#include<string>
using namespace std;
struct Node{
	Node *lchild;
	Node *rchild;
	char c;
}Tree[50];
int loc=0;
Node *create(){
	Tree[loc].lchild=Tree[loc].rchild=NULL;
	return &Tree[loc++];
}
char str1[30],str2[30];
void postOrder(Node *T){
	if(T->lchild!=NULL)  postOrder(T->lchild);
	if(T->rchild!=NULL)  postOrder(T->rchild);
	printf("%d",T->c);
}
Node *build(int s1,int e1,int s2,int e2){
	Node* ret=create();
	ret->c=str1[s1];
	int rootIdx;
	for(int i=s2;i<e2;i++){
		if(str1[s1]==str2[i]) {
			rootIdx=i;
			break;
		}
	}
	if(rootIdx!=s2) ret->lchild=build(s1+1,s1+(rootIdx-s2),s2,rootIdx-1);
	if(rootIdx!=e2) ret->rchild=build(s1+(rootIdx-s2)+1,e1,rootIdx+1,e2);
	return ret;
}
int main(){
	while(scanf("%s",str1)!=EOF){
		scanf("%s",str2);
		int L1=strlen(str1);
		int L2=strlen(str2);
		Node* T=build(0,L1,0,L2);
		postOrder(T);
		printf("\n");
	}
	return 0;
}