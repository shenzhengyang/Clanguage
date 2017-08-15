//二叉树 根据前序遍历、中序遍历 给出后序遍历
#include<stdio.h>
#include<string.h>
struct Node{
	Node *lchild;
	Node *rchild;
	char c;
}Tree[50];
int loc;
Node *creat(){
	Tree[loc].lchild=Tree[loc].rchild=NULL;
	return &Tree[loc++];
}
char str1[30],str2[30];
void postOrder(Node *T){
	if(T->lchild!=NULL){
		postOrder(T->lchild);
	}
	if(T->rchild!=NULL){
		postOrder(T->rchild);
	}
	printf("%c",T->c);
}
Node *build(int s1,int e1,int s2,int e2){
	printf("%d",s1);
	Node* ret=creat();
	ret->c=str1[s1];
	int rootIdx;
	int i;
	for(i=s2;i<e2;i++){
		if(str2[i]==str1[s1]){
			rootIdx=i;
			break;
		}
	}
	printf("%d\n",rootIdx);
	if(rootIdx!=s2){//存在左孩子
		ret->lchild=build(s1+1,s1+(rootIdx-s2),s2,rootIdx-1);
	}
	if(rootIdx!=e2){//存在右孩子
		ret->rchild=build(s1+(rootIdx-s2)+1,e1,rootIdx+1,e2);
	}
	return ret;
}
int main(){
	while(scanf("%s",str1)!=EOF){
		scanf("%s",str2);
		loc=0;
		int L1=strlen(str1);//strlen 计算str1长度 需引入#include<string>
		int L2=strlen(str2);
		Node *T=build(0,L1-1,0,L2-1);
		printf("%d\n",L1);
		postOrder(T);
		printf("%d\n",L1);
		printf("\n");
	}
	return 0;
}