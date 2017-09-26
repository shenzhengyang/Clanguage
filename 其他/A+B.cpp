#include<stdio.h>
#include<string>
using namespace std;
char s1[20];
char s2[20];
int main(){
	while(scanf("%s%s",s1,s2)!=EOF){
		int i;
		int aLen,bLen;
		_int64 a=0,b=0;
		aLen=strlen(s1);
		bLen=strlen(s2);
		for(i=0;i<aLen;i++){
			if(s1[i]>='0'&&s1[i]<='9') a=a*10+s1[i]-'0';
		}
		if(s1[0]=='-') a=-a;
		for(i=0;i<bLen;i++){
			if(s2[i]>='0'&&s2[i]<='9') b=b*10+s2[i]-'0';
		}
		if(s2[0]=='-') b=-b;
		printf("%I64d\n",a+b);
	}
	return 0;
}