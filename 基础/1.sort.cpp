//≈≈–Ú
/**
#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
	int i;
	int n;
	int a[101];
	while(scanf("%d",&n)!=EOF){
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		sort(a,a+n);
		for(i=0;i<n;i++){
			printf("%d ",a[i]);
		}
		printf("\n");
	}
	return 0;
}*/
//Ωµ–Ú≈≈–Ú
/**
#include<stdio.h>
#include<algorithm>
using namespace std;
bool cmp(int x,int y){
	return x>y;
}
int main(){
	int i;
	int n;
	int buf[101];
	while(scanf("%d",&n)!=EOF){
		for(i=0;i<n;i++){
			scanf("%d",&buf[i]);
		}
		sort(buf,buf+n,cmp);
		for(i=0;i<n;i++){
			printf("%d ",buf[i]);
		}
		printf("\n");
	}
	return 0;
}*/
//∂‡÷÷¿‡–Õ≈≈–Ú
#include<stdio.h>
#include<algorithm>
using namespace std;
struct E{
	char name[101];
	int age;
	int score;
	bool operator < (const E &b) const{
		if(score!=b.score) return score<b.score;
		int tmp=strcmp(name,b.name);
		if(tmp!=0) return tmp<0;
		else return age<b.age;
	}
}buf[1000];
int main(){
	int n;
	int i;
	while(scanf("%d",&n)!=EOF){
		for(i=0;i<n;i++){
			scanf("%s%d%d",buf[i].name,&buf[i].age,&buf[i].score);
		}
		sort(buf,buf+n);
		for(i=0;i<n;i++){
			printf("%s %d %d\n",buf[i].name,buf[i].age,buf[i].score);
		}
	}
	return 0;
}