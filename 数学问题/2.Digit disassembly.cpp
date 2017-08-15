//Î»Êý²ð½â
#include<stdio.h>
#include<string>
using namespace std;
int main(){
	char a[10];
	char b[10];
	int i,j;
	int ans=0;
	while(scanf("%s%s",a,b)!=EOF){
		int L1=strlen(a);
		int L2=strlen(b);
		for(i=0;i<L1;i++){
			for(j=0;j<L2;j++){
				ans+=(a[i]-'0')*(b[j]-'0');
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}