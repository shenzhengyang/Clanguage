#include<stdio.h>
#include<algorithm>
using namespace std;
struct E{
	int age;
	int score;
    char name[50];
	bool operator < (const E &b) const{
		if(score!=b.score) return score<b.score;
		int tmp=strcmp(name,b.name);
		if(tmp!=0) return tmp<0;
		else return age<b.age;
	}
}buf[1000];
/*
bool cmp(E a, E b){
	if(a.score!=b.score) return a.score<b.score;
	int tmp=strcmp(a.name,b.name);
	if(tmp!=0) return tmp<0;
	else return a.age<b.age;
}*/
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