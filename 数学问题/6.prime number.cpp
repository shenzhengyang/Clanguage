//ËØÊı×ö·¨ 
#include<stdio.h>
#include<math.h>
bool prime(int x){
	if(x<=1) return false;
	int bound=(int)sqrt(x)+1;
	int i;
	for(i=2;i<bound;i++){
		if(x%i==0) return false;
	}
	return true;
}
int main(){
	int x;
	while(scanf("%d",&x)!=EOF) {
		printf(prime(x)?"YES\n":"NO\n");
	}
	return 0;
}