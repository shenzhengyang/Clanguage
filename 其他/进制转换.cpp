#include<stdio.h>
int main(){
	int m,a,b;
	while(scanf("%d",&m)!=EOF){
		if(m==0) break;
		scanf("%d%d",&a,&b);
		a=a+b;
		int ans[100];
		int i=0;
		while(a!=0){
			ans[i]=a%m;
			a=a/m;
			i++;
		}
		for(;i>0;i--){
			printf("%d",ans[i-1]);
		}
		printf("\n");
	}
	return 0;
}