//Êä³öÌÝÐÎ
#include<stdio.h>
int main(){
	int n;
	int total;
	int i,j;
	while(scanf("%d",&n)!=EOF){
		total=n+2*(n-1);
		for(i=0;i<n;i++){
			for(j=0;j<total;j++){
				if(j<2*(n-1-i)){
					printf(" ");
				}else{
					printf("*");
				}
			}
			printf("\n");
		}
	}
	return 0;
}