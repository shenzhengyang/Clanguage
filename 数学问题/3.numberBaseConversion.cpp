//A+B
/**
*����10��������a,b
*���a+b��m����ת��
*/
#include<stdio.h>
int buf[50]={0};
int main(){
	int m;
	while(scanf("%d",&m)!=EOF){
		if(m==0) break;
		int a;
		int b;
		int i=0;
		scanf("%d%d",&a,&b);
		a=a+b;
		while(a!=0){
			buf[i]=a%m;
			a=a/m;
			i++;
		}
		while(i>0){
			printf("%d",buf[i-1]);
			i--;
		}
		printf("\n");
	}
	return 0;
}
//a,n,b;��a����nת��Ϊb����
#include<stdio.h>
#include<string>
#include<math.h>//ָ������ ʹ��pow(x,y)
using namespace std;
int a2ten(int a,char* n){
	int L=strlen(n);
	int i;
	int ans=0;
	int tmp;
	for(i=0;i<L;i++){
		if(n[L-i-1]>='a'&&n[L-i-1]<='f') tmp=n[L-i-1]-'a'+10;
		if(n[L-i-1]>='A'&&n[L-i-1]<='F') tmp=n[L-i-1]-'A'+10;
		if(n[L-i-1]>='0'&&n[L-i-1]<='9') tmp=n[L-i-1]-'0';
		ans+=tmp*pow(a,i); 
	}
	return ans;
}
int main(){
	int a,b;
	char n[50];
	while(scanf("%d",&a)!=EOF){
		scanf("%s",n);
		scanf("%d",&b);
		int tenNum=a2ten(a,n);
		int ans[50];
		int i=0;
		while(tenNum!=0){
			ans[i]=tenNum%b;
			tenNum=tenNum/b;
			i++;
		}
		for(;i>0;i--){
			printf("%d",ans[i-1]);
		}
		printf("\n");
	}
	return 0;
}