//贪心算法
#include<stdio.h>
#include<algorithm>
using namespace std;
struct E{
	double j;
	double f;
	double h;//性价比
	bool operator < (const E &b)const{
		return h>b.h;
	}
}buf[100];
int main(){
	double m;
	int n;
	int i;
	while(scanf("%lf%d",&m,&n)!=EOF){
		if(m==-1&&n==-1) break;
		for(i=0;i<n;i++){
			scanf("%lf%lf",&buf[i].j,&buf[i].f); //!注：double类型的读入使用%lf
			buf[i].h=buf[i].j/buf[i].f;
		}
		sort(buf,buf+n);
		int t=0;
		double ans=0;
		printf("%lf\n",m);
		while(m>0&&t<n){
			if(m>buf[t].f){
				m-=buf[t].f;
				ans+=buf[t].j;
				printf("%lf\n",ans);
			}else{
				ans+=(m/buf[t].f)*buf[t].j;
				m=0;//没用
			}
			t++;
		}
		printf("%f\n",ans);
	}
	return 0;
}