//KMP 模式串匹配
#include<stdio.h>
#include<string>
using namespace std;
int next[100];
char ts[100];
char ps[100];
int* getNext(char p[]){
	int length=strlen(p);
	next[0]=-1;
	int j=0;
	int k=-1;
	while(j<length-1){
		if(k==-1||p[j]==p[k]) next[++j]=++k;
		else k=next[k];
	}
	return next;
}
int main(){
	int i=0;
	int j=0;
	while(scanf("%s%s",ts,ps)!=EOF){
		int TsLen=strlen(ts);
		int PsLen=strlen(ps);
		printf("%d%d\n",TsLen,PsLen);
		int* next=getNext(ps);
		while(i<TsLen&&j<PsLen){
			if(j==-1||ts[i]==ps[j]){
				i++;
				j++;
				printf("%d\n",j);
			}else{
				//i不需要回朔
				j=next[j];
				printf("%d\n",j);
			}
		}

		if(j==PsLen) printf("%d\n",i-j);
		else printf("%d\n",-1);
	}
	return 0;
}
