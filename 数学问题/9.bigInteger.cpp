//�߾������� ʵ��a+b
/**
*������C/C++�߾��������ṹ��
struct bigInteger{
	int digit[1000];
	int size;
}
*/
//���ϵ�̫�鷳 �Լ�д��
#include<stdio.h>
#include<string>
using namespace std;
char a[1000];//��ʼ��
char b[1000];//��ʼ��
int c[1000];
int max(int a,int b){return a>b?a:b;}
int main(){
	while(scanf("%s%s",a,b)!=EOF){
		int La=strlen(a);
		int Lb=strlen(b);
		int tmp;
		int x=0;
		int t=0;
		while(La!=0||Lb!=0){
			if(La!=0&&Lb!=0){
				tmp=(a[La-1]-'0')+(b[Lb-1]-'0')+x;
				La--;
				Lb--;
			}
			else if(La!=0){
				tmp=(a[La-1]-'0')+x;
				La--;
			}
			else if(Lb!=0){
				tmp=(b[Lb-1]-'0')+x;
				Lb--;
			}
			c[t]=tmp%10;
			x=tmp/10;
			t++;
		}
		for(;t>0;t--){
			printf("%d",c[t-1]);
		}
		printf("\n");
	}
	return 0;
}