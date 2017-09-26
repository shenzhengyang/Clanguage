#include<stdio.h>
#include<math.h>
bool judge(int x){
	if(x<2) return false;
	int bound=(int)sqrt(x)+1;
	for(int i=2;i<bound;i++){
		if(x%i==0) return false;
	}
	return true;
}
int main(){
	int x;
	while(scanf("%d",&x)!=EOF){
		puts(judge(x)?"YES":"NO");
	}
	return 0;
}