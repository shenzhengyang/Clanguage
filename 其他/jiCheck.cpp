#include<stdio.h>
#include<string>
using namespace std;
char s[100];
int main(){
	while(scanf("%s",s)!=EOF){
		int len=strlen(s);
		int i;
		for(i=0;i<len;i++){
			char tmp=s[i];
			int ans[10]={0};
			int k=0;
			int num=0;
			while(tmp!=0){
				ans[k]=tmp%2;
				tmp/=2;
				if(ans[k]==1) num++;
				k++;
			}
			int j;
			if(num%2==0) ans[7]=1;
			for(j=7;j>=0;j--){
				printf("%d",ans[j]);
			}
			printf("\n");
		}
	}
	return 0;
}