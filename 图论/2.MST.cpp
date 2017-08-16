//��С������
/**
��Ŀ������
    ĳʡ������彻ͨ״�����õ���ͳ�Ʊ����г�����������ׯ��ľ��롣
	ʡ��������ͨ���̡���Ŀ����ʹȫʡ�κ�������ׯ�䶼����ʵ�ֹ�·��ͨ
	������һ����ֱ�ӵĹ�·������ֻҪ�ܼ��ͨ����·�ɴＴ�ɣ���
	��Ҫ������Ĺ�·�ܳ���Ϊ��С���������С�Ĺ�·�ܳ��ȡ�
���룺
    ��������������ɲ���������
	ÿ�����������ĵ�1�и�����ׯ��ĿN ( < 100 )��
	����N(N-1)/2�ж�Ӧ��ׯ��ľ��룬ÿ�и���һ����������
	�ֱ���������ׯ�ı�ţ��Լ�������ׯ��ľ��롣
	Ϊ���������ׯ��1��N��š�
    ��NΪ0ʱ�������������������������
�����
    ��ÿ��������������1���������С�Ĺ�·�ܳ��ȡ�
�������룺
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
���������
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