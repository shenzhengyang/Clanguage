#include<stdio.h>
#include<string>
using namespace std;
char s[1000];
int main(){
	while(scanf("%s",s)!=EOF){
		int a=0,b=0,c=0;
		int len;
		len=strlen(s);
		int i;
		int tarZ=0,tarJ=0;
		for(i=0;i<len;i++){
			if(s[i]=='z') tarZ=1;
			else if(s[i]=='j') tarJ=1;
			else{
				if(tarZ==0&&tarJ==0) a++;
				else if(tarZ==1&&tarJ==0) b++;
				else c++;
			}
		}
		//if(a*b==c) printf("Accepted");
		//else printf("Wrong Answer");
		printf("%s\n",a*b==c?"Accepted":"Wrong Answer");
	}
	return 0;
}