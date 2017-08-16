//最小生成树
/**
题目描述：
    某省调查乡村交通状况，得到的统计表中列出了任意两村庄间的距离。
	省政府“畅通工程”的目标是使全省任何两个村庄间都可以实现公路交通
	（但不一定有直接的公路相连，只要能间接通过公路可达即可），
	并要求铺设的公路总长度为最小。请计算最小的公路总长度。
输入：
    测试输入包含若干测试用例。
	每个测试用例的第1行给出村庄数目N ( < 100 )；
	随后的N(N-1)/2行对应村庄间的距离，每行给出一对正整数，
	分别是两个村庄的编号，以及此两村庄间的距离。
	为简单起见，村庄从1到N编号。
    当N为0时，输入结束，该用例不被处理。
输出：
    对每个测试用例，在1行里输出最小的公路总长度。
样例输入：
	3
	1 2 1
	1 3 2
	2 3 4
	4
	1 2 1
	1 3 4
	1 4 1
	2 3 3
	2 4 2
	3 4 5
	0
样例输出：
	3
	5
*/
#include <stdio.h>
#include<algorithm>
using namespace std;
int tree[101];
int findRoot(int x){
	if(tree[x]==-1) return x;
	else{
		int tmp=findRoot(tree[x]);
		tree[x]=tmp;
		return tmp;
	}
}
struct E{
	int a,b;
	int cost;
	bool operator < (const E &A) const{
		return cost<A.cost;
	}
}edge[6000];
int main(){
	int n;
	int i;
	while(scanf("%d",&n)!=EOF){
		if(n==0) break;
		for(i=1;i<=n*(n-1)/2;i++){
			scanf("%d%d%d",&edge[i].a,&edge[i].b,&edge[i].cost);
		}
		sort(edge+1,edge+1+n*(n-1)/2);
		for(i=1;i<=n;i++){
			tree[i]=-1;
		}
		int ans=0;
		for(i=1;i<n*(n-1)/2;i++){
			int a=findRoot(edge[i].a);
			int b=findRoot(edge[i].b);
			if(a!=b){
				tree[a]=b;
				ans+=edge[i].cost;
			}
		}
		printf("%d",ans);
	}
	return 0;
}