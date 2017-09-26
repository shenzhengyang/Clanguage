#include<stdio.h>
int prime[100];
int primeSize;
bool mark[10001];
void init(){
	int i;
	for(i=1;i<=10000;i++){
		mark[i]=false;
	}
	primeSize=0;
	for(i=2;i<10000;i++){
		if(mark[i]==true) continue;
		prime[primeSize++]=i;
		for(int j=i*i;j<10000;j+=i){
			mark[j]=true;
		}
	}
}

int main(){
	init();
	int n;
	while(scanf("%d",&n)!=EOF){
		bool isinput =false;
		for(int i=0;i<primeSize;i++){
			if(prime[i]<n&&prime[i]%10==1){
				if(isinput==false){
					isinput=true;
					printf("%d",prime[i]);
				}else{
					printf(" %d",prime[i]);
				}
			}
		}
		if(isinput==false){
			printf("-1\n");
		}
		else printf("\n");
	}
	return 0;
}