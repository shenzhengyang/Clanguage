//hash 应用
/**
#include<stdio.h>
int main(){
	int hash[101]={0};
	int n;
	int i;
	int x;
	while(scanf("%d",&n)!=EOF){
		for(i=0;i<n;i++){
			scanf("%d",&x);
			hash[x]++;
		}
		scanf("%d",&x);
		printf("%d\n",hash[x]);
	}
	return 0;
}*/
//sort 排序 输出n个数的前m个数
/**
#include<stdio.h>
#include<algorithm>
using namespace std;
bool cmp(int x,int y){
	return x>y;
}
int buf[1000001];//一定要初始化
int main(){
	int n,m;
	int i;
	while(scanf("%d%d",&n,&m)!=EOF){
		for(i=-500000;i<=500000;i++){
			buf[i+500000]=0;
		}
		for(i=0;i<n;i++){
			scanf("%d",&buf[i]);
		}
		sort(buf,buf+n,cmp);
		for(i=0;i<m;i++){
			printf("%d ",buf[i]);
		}
		printf("\n");
	}
	return 0;
}*/
//hash 的做法 不太好想！
#include<stdio.h>
int buf[1000001]={0};//记得初始化
int main(){
	int n,m;
	int i;
	int x;
	while(scanf("%d%d",&n,&m)!=EOF){
		for (i=0;i<n;i++){
			scanf("%d",&x);
			buf[x+500000]=1;
		}
		for(i=1000000;i>=0;i--){
			if(buf[i]==1){
				printf("%d ",i-500000);
				m--;
				if(m==0){
					printf("\n");
					break;
				}
			}
		}
	}
	return 0;
}
