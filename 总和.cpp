//mao pao pai xu
/*
#include<stdio.h>
int main(void){
	int n=0;
	int buf[100];
	int i;
	while(scanf("%d",&n)!=EOF){

		for(i=0;i<n;i++){
			scanf("%d",&buf[i]);
		}
		for(i=0;i<n;i++){
			for(int j=0;j<n-i-1;j++)
				if(buf[j]>buf[j+1]){
					int tmp=buf[j];
					buf[j]=buf[j+1];
					buf[j+1]=tmp;
				}
		}
		for(i=0;i<n;i++){
			printf("%d ",buf[i]);
		}
		printf("\n");
	}
	return 0;
}*/
//sort pai xu
/*
#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
	int n=0;
	int buf[100];
	int i;
	while(scanf("%d",&n)!=EOF){

		for(i=0;i<n;i++){
			scanf("%d",&buf[i]);
		}
		
		sort(buf,buf+n);
		for(i=0;i<n;i++){
			printf("%d ",buf[i]);
		}
		printf("\n");
	}
	return 0;
}*/
//sort cmp
/*
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
struct E{
	char name[101];
	int age;
	int score;
}buf[1000];
bool cmp(E a,E b){
	if(a.score!=b.score) return a.score<b.score;
	int tmp=strcmp(a.name,b.name);
	if(tmp!=0) return tmp<0;
	else return a.age<b.age;
}
int main(){
	int n;
	int i;
	while(scanf("%d",&n)!=EOF){
		for(i=0;i<n;i++){
			scanf("%s%d%d",&buf[i].name,&buf[i].age,&buf[i].score);
		}
		sort(buf,buf+n,cmp);
		for(i=0;i<n;i++){
			printf("%s %d %d\n",buf[i].name,buf[i].age,buf[i].score);
		}
	}
	return 0;
}*/
//hash shuchu
/* have some question
#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
int main(void){
	int n;
	int i;
	int hash[101]={0};
	int score;
	int x=0;
	while(scanf("%d",&n)!=EOF){
		for(i=0;i<n;i++){
			scanf("%d",&score);
			hash[score]++;
		}
		scanf("%d",&x);
		printf("%d\n",hash[x]);

	}
	return 0;
}*/
//sort shuchu
/*
#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
int main(){
	int n;
	int m;
	int i;
	int buf[1000]={0};
	while(scanf("%d%d",&n,&m)!=EOF){
		for(i=0;i<n;i++){

			scanf("%d",&buf[i]);
		}
		sort(buf,buf+n);
		for(i=n-1;i>n-m-1;i--){
           printf("%d ",buf[i]);
		}
		printf("\n");
	}
	return 0;
}*/
//shu chu xing xing
/*
#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
int main(){
	int h;
	int i;
	int j;
	int col;
	while(scanf("%d",&h)!=EOF){
		col=h+(h-1)*2;
		for(i=0;i<h;i++){
			for(j=0;j<col-(h+i*2);j++)
				printf(" ");
			for(j=0;j<h+i*2;j++)
				printf("*");
			printf("\n");
		}
	}
	return 0;
}*/
//cha zhao hash
/*
#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
int main(){
	int n;
	int hash[201]={0};
	int i;
	int x;
	while(scanf("%d",&n)!=EOF){
		for(i=0;i<n;i++){
			scanf("%d",&x);
			hash[x]=i;
		}
		scanf("%d",&x);
		if(hash[x]!=0)
			printf("%d\n",hash[x]);
		else
			printf("%d\n",-1);
	}
	return 0;
}*/
// er fen cha zhao
/*
#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
struct E{
	char no[101];
	char name[100];
	int age;
	char sex[5];
}buf[100];
bool cmp (E a,E b){
	return strcmp(a.no,b.no)<0;
}
int main(){

	return 0;
}*/
/* there are some question
#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
struct E{
	double j;
	double f;
	double s;
}buf[1001];
bool cmp(E a,E b){
	return a.s>b.s;
}
int main(){
	int m;
	int n;
	int i;
	while(scanf("%f%d",&m,&n)!=EOF){
		if(m==-1&&n==-1) break;
		for(i=0;i<n;i++){
			scanf("%1f%1f",&buf[i].j,&buf[i].f);
			buf[i].s=buf[i].j/buf[i].f;
			
		}
		printf("%1f %1f %1f",buf[0].j,buf[0].f,buf[0].s);
		sort(buf,buf+n,cmp);
        
		int idx=0;
		int ans=0;
		while(m>0&&idx<n){
			if(m>buf[idx].f){
				ans+=buf[idx].j;
				m-=buf[idx].f;
			}else{
				ans+=buf[idx].j*(m/buf[idx].f);
				m=0;
			}
			idx++;
		}
		printf("%f",ans);
	}
	return 0;
}*/
//haffman tree
/*have some question
#include <stdio.h>
#include<queue>
#include<functional>
using namespace std;
priority_queue<int,vector<int>,greater<int>> Q;
int main(){

	int n;
	int i;
	while(scanf("%d",&n)!=EOF){
		while(Q.empty()==false){
			Q.pop();
		}
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
			Q.push(a+b);
		}
		printf("%d\n",ans);
	}
	return 0;
}*/
//specail cheng fa
/*
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
	int a,b;
	int i,j;
	while(scanf("%d%d",&a,&b)!=EOF){
		int buf1[20],buf2[20],size1=0,size2=0;
		while(a!=0){
			buf1[size1]=a%10;
			size1++;
			a/=10;
		}
		while(b!=0){
			buf2[size2]=b%10;
			size2++;
			b/=10;
		}
		int ans=0;
		for(i=0;i<size1;i++){
			for(j=0;j<size2;j++){
				ans+=buf1[i]*buf2[j];
			}
		}
		printf("%d\n",ans);
	}
	
	return 0;
}*/
/*
#include<stdio.h>
int main(){
	char a[11],b[11];
	while(scanf("%s%s",a,b)!=EOF){
		int ans=0;
		int i,j;
		for(i=0;a[i]!=0;i++){
			for(j=0;b[j]!=0;j++){
				ans+=(a[i]-'0')*(b[j]-'0');
			}
		}
		printf("%d",ans);
	}
	return 0;
}*/
//gcd
/*
#include<stdio.h>
int gcd(int a,int b){
	if(b==0) return a;
	else return gcd(b,a%b);
}
int main(){
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF){
		printf("%d\n",gcd(a,b));
	}
	return 0;
}*/
//LCM a*b/gcd(a,b)
/*
#include<stdio.h>
int gcd(int a,int b){
	if(b==0) return a;
	else return gcd(b,a%b);
}
int main(){
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF){
		printf("%d\n",a*b/gcd(a,b));
	}
	return 0;
}*/
// su shu 
/*
#include<stdio.h>
#include<math.h>
bool judge(int x){
	int i;
	if(x<=1) return false;
	int bound=(int)sqrt(x)+1;
	for(i=2;i<bound;i++){
		if(x%i==0) return false;
	}
	return true;
}
int main(){
	int x;
	while(scanf("%d",&x)!=EOF){
		printf(judge(x)?"yes\n":"no\n");
	}
	return 0;
}*/
//print U
/*
#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	while(scanf("%s",a)!=EOF){
		int n1,n2,n3;
		int size=strlen(a);
		if(size<=7){
			n2=3;
			n1=n3=(size-n2)/2;
		}else{
			n1=n3=(size+2)/3;
			n2=size+2-2*n1;

		}
		int i,j;
		for(i=0;i<n1;i++){
			for(j=0;j<n2;j++){
				if(i==n1-1){
					printf("%c",a[i+j]);
				}else{
					if(j==0) printf("%c",a[i]);
					else if(j==n2-1) printf("%c",a[size-i-1]);
					else printf(" ");
				}
			}
			printf("\n");
		}
		
	}
return 0;
}*/
//ju zhen xiangcheng
/*
#include<stdio.h>
int main(){
     int a[2][3],b[3][2];
     int i,j,k;
     int ans[2][2]={0};
	 
     for(i=0;i<2;i++){
		 for(j=0;j<3;j++){
			 scanf("%d",&a[i][j]);
		 }
	 }
	 for(i=0;i<3;i++){
		 for(j=0;j<2;j++){
			 scanf("%d",&b[i][j]);
		 }
	 }
     for(i=0;i<2;i++){
          for(j=0;j<2;j++){
               for(k=0;k<3;k++){
				   ans[i][j]+=a[i][k]*b[k][j];
               }
          }
     }
     for(i=0;i<2;i++){
		 for(j=0;j<2;j++){
			 printf("%d ",ans[i][j]);
		 }
		 printf("\n");
	 }
	 return 0;
}*/
//jin zhi zhuan huan
/*
#include<stdio.h>
int main(){
	long a,b;
	int m;
	int i;
	while(scanf("%d",&m)!=EOF){
		if(m==0) break;
		scanf("%d%d",&a,&b);
		a=a+b;
		int ans[50],size=0;
		while(a!=0){
			ans[size]=a%m;
			a/=m;
			size++;
		}
		for(i=size-1;i>=0;i--){
			printf("%d",ans[i]);
		}
		printf("\n");
	}
	return 0;
}*/
//tu question
/*
#include<stdio.h>
int tree[1000]={0};
int findRoot(int x){
	if(tree[x]==-1) return x;
	else{
		int tmp=findRoot(tree[x]);
		tree[x]=tmp;
		return tmp;
	}
}
int main(){

	int n,m;
	int i;
	while(scanf("%d%d",&n,&m)!=EOF){
		if(n==0) break;
		for(i=1;i<=n;i++){
			tree[i]=-1;
		}
		while(m--!=0){
			int a,b;
			scanf("%d%d",&a,&b);
			a=findRoot(a);
			b=findRoot(b);
			if(a!=b) tree[a]=b;

		}
		int ans=0;
		for(i=1;i<=n;i++){
			if(tree[i]==-1) ans++;
		}
		printf("%d\n",ans-1);
  
	}
	return 0;
}*/
//MST
/*
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
}*/
//BFS
/*
#include<stdio.h>
#include<queue>
using namespace std;
bool mark[50][50][50];
int maze[50][50][50];
struct N{
    int x,y,z;
    int t;
};
queue<N> Q;
int go[][3]={
    1,0,0,
    -1,0,0,
    0,1,0,
    0,-1,0,
    0,0,1,
    0,0,-1
};
int BFS(int a,int b,int c){
    while(Q.empty()==false){
        N now=Q.front();
        Q.pop();
        for(int i=0;i<6;i++){
            int nx=now.x+go[i][0];
            int ny=now.y+go[i][1];
            int nz=now.z+go[i][2];
            if(nx<0||nx>a||ny<0||ny>b||nz<0||nz>c) continue;
            if(maze[nx][ny][nz]==1) continue;
            if(mark[nx][ny][nz]==true) continue;
            
            N tmp;
            tmp.x=nx;
            tmp.y=ny;
            tmp.z=nz;
            tmp.t=now.t+1;
            Q.push(tmp);
            mark[nx][ny][nz]=true;
            if(nx==a-1&&ny==b-1&&nz==c-1) return tmp.t;
        }
    }
    return -1;
}
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int a,b,c,t;
        scanf("%d%d%d%d",&a,&b,&c,&t);
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                for(int k=0;k<c;k++){
                    scanf("%d",&maze[i][j][k]);
                    mark[i][j][k]=false;
                }
            }
        }
        while(Q.empty()==false) Q.pop();
        mark[0][0][0]=true;
        N tmp;
        tmp.t=tmp.y=tmp.x=tmp.z=0;
        Q.push(tmp);
        int rec=BFS(a,b,c);
        if(rec<=t) printf("%d\n",rec);
        else printf("-1\n");
    }
    return 0;
}*/
//DFS
/*
#include<stdio.h>
using namespace std;
char maze[8][8];
int n,m,t;
bool success;
int go[][2]={
    1,0,
    -1,0,
    0,1,
    0,-1
};
void DFS(int x,int y,int time){
    for(int i=0;i<4;i++){
        int nx=x+go[i][0];
        int ny=y+go[i][1];
        if(nx<1||nx>n||ny<1||ny>m) continue;
        if(maze[nx][ny]=='X') continue;
        if(maze[nx][ny]=='D'){
            if(time+1==t){
                success=true;
                return;
            }
            else continue;
        }
        maze[nx][ny]='X';
        DFS(nx,ny,time+1);
        maze[nx][ny]='.';
        if(success) return;
    }
}
int main(){
    while(scanf("%d%d%d",&n,&m,&t)!=EOF){
        if(n==0&&m==0&&t==0) break;
        for(int i=1;i<n;i++){
            scanf("%s",maze[i]+1);
        }
        success=false;
        int sx,sy;
        //Ñ°ÕÒDµÄÎ»ÖÃ×ø±ê 
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(maze[i][j]=='D'){
                    sx=i;
                    sy=j;
                }
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(maze[i][j]=='S'&&(i+j)%2==((sx+sy)%2+t%2)%2){
                    maze[i][j]='X';
                    DFS(i,j,0);
                    
                }
            }
        }
        puts(success==true?"YES":"NO");
    }
    return 0;
}*/
//di tui N jie lou ti 
/*#include <stdio.h>
int fun(int n){
	if(n==1) return 1;
	if(n==2) return 2;
	else return fun(n-1)+fun(n-2);
}
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		printf("%d\n",fun(n));
	}
	return 0;
}*/
//zhuang xin feng di tui
/*
#include<stdio.h>
int fun(int n){
	if(n==1) return 0;
	if(n==2) return 1;
	else return (n-1)*fun(n-1)+(n-1)*fun(n-2);
}
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		printf("%d\n",fun(n));
	}
	return 0;
}*/
//LIS zui chang di zeng zi xu lie
/*#include<stdio.h>
int max(int a,int b){return a>b?a:b;}
int list[26];
int dp[26];
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int i;
		for(i=1;i<=n;i++)
		{
			scanf("%d",&list[i]);
		}
		for(i=1;i<=n;i++){
			int tmax=1;
			for(int j=1;j<i;j++){
				if(list[j]>=list[i]){
					tmax=max(tmax,dp[j]+1);
				}
			}
			dp[i]=tmax;
			printf("%d\n",dp[i]);
		}
		int ans=1;
		for(i=1;i<=n;i++){
			ans=max(ans,dp[i]);
		}
		printf("%d\n",ans);
	}
	return 0;
}*/
