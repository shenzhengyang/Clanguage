//查找 x 书上例子太麻烦 本次采用hash法
/**
#include<stdio.h>
int main(){
	int hash[201]={-1};//一定初始化
	int n;
	int x;
	int i;
	while(scanf("%d",&n)!=EOF){
		for(i=0;i<n;i++){
			scanf("%d",&x);
			hash[x]=i;
		}
		scanf("%d",&x);
		printf("%d\n",hash[x]);
	}
	return 0;
}*/
//二分查找
#include<stdio.h>
#include<algorithm>
using namespace std;
struct E{
	char no[100];
	char name[100];
	int age;
	char sex[5];
	bool operator < (const E &b) const{
		return strcmp(no,b.no)<0;
	}
}buf[1001];
int main(){
	int n;
	int i;
	while(scanf("%d",&n)!=EOF){
		for(i=0;i<n;i++){
			scanf("%s%s%s%d",buf[i].no,buf[i].name,buf[i].sex,&buf[i].age);
		}
		sort(buf,buf+n);
		int m;
		scanf("%d",&m);
		while(m--!=0){
			int ans=-1;
			char x[30];
			scanf("%s",x);
			int top=n-1;
			int base=0;
			while(top>=base){
				int mid=(top+base)/2;
				int tmp=strcmp(buf[mid].no,x);
				if(tmp==0) {
					ans=mid;
					break;
				}
				else if(tmp>0) top=mid-1;
				else base=mid+1;
			}
			if(ans==-1) printf("No answer!\n");
			else printf("%s %s %s %d\n",buf[ans].no,buf[ans].name,buf[ans].sex,buf[ans].age);
		}
	}
	return 0;
}