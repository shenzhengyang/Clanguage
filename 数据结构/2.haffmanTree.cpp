//哈夫曼Tree
/**
*1.queue 队列的用法和stack一样 详见1.stack
*2.创建小顶堆：priority_queue<class,vector<class>,greater<class>> name;
*/
#include<stdio.h>
#include<queue>
using namespace std;
priority_queue <int ,vector<int>,greater<int>> Q;建立一个小顶堆
int main(){
	int n;
	int i;
	while(scanf("%d",&n)!=EOF){
		while(!Q.empty()) Q.pop();
		for(i=0;i<n;i++){
			int x;
			scanf("%d",&x);
			Q.push(x);
		}
		int ans=0;
		while(Q.size()>1){
			int a=Q.top();
			Q.pop();
			int b=Q.top();
			Q.pop();
			ans+=a+b;
		}
		Q.push("%d\n",ans);
	}
	return 0;
}