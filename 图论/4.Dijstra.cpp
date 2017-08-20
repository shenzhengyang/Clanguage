//Dijstra 最短路径算法
#include<stdio.h>
#include<vector>
using namespace std;
struct E{
	int next;
	int c;
};
vector<E> edge[101];
bool mark[101];
int Dis[101];
int main(){
	int n,m;
	int i,j;
	while(scanf("%d%d",&n,&m)!=EOF){
		if(n==0&&m==0) break;
		for(i=1;i<=n;i++){
			edge[i].clear();//初始化邻接链表
		}
		while(m--){
			int a,b,c;
			scanf("%d%d%d",&a,&b,&c);
			E tmp;
			tmp.c=c;
			tmp.next=b;
			edge[a].push_back(tmp);
			tmp.next=a;
			edge[b].push_back(tmp);
		}
		for(i=1;i<=n;i++){
			Dis[i]=-1;
			mark[i]=false;
		}
		Dis[1]=0;
		mark[1]=true;
		int newP=1;
		for(i=1;i<n;i++){
			for(j=0;j<edge[newP].size();j++){
				int t=edge[newP][j].next;
				int c=edge[newP][j].c;
				if(mark[t]==true) continue;
				if(Dis[t]==-1||Dis[t]>Dis[newP]+c)
					Dis[t]=Dis[newP]+c;
			}
			int min=123123123;
			for(j=1;j<=n;j++){
				if(mark[j]==true) continue;
				if(Dis[j]==-1) continue;
				if(Dis[j]<min){
					min=Dis[j];
					newP=j;
				}
			}
			mark[newP]=true;
		}
		printf("%d\n",Dis[n]);
	}
	return 0;
}