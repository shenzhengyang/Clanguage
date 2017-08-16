//û���� ��ʱ���ٿ���������
/**
��Ŀ������

	Ignatius��ħ��ץ����,��һ��ħ������ȥ��,�����Ignatius�����ĺû��ᡣ
	ħ��ס��һ���Ǳ���,�Ǳ���һ��A*B*C��������,���Ա���ʾ��A��B*C�ľ���,
	�տ�ʼIgnatius������(0,0,0)��λ��,�뿪�Ǳ�������(A-1,B-1,C-1)��λ��,
	����֪��ħ������T���Ӻ�ص��Ǳ�,
	Ignatiusÿ�����ܴ�һ�������ߵ����ڵ����������е�����һ����
	���ڸ���Ǳ��ĵ�ͼ,��������Ignatius�ܷ���ħ������ǰ�뿪�Ǳ�
	(ֻҪ�ߵ����ھ����뿪�Ǳ�,����ߵ����ڵ�ʱ��ħ���պû���Ҳ�������ɹ�),
	��������������Ҫ���ٷ��Ӳ����뿪,������������-1.
���룺

	�������ݵĵ�һ����һ��������K,�����������ݵ�������
	ÿ��������ݵĵ�һ�����ĸ�������A,B,C��T(1<=A,B,C<=50,1<=T<=1000),
	���Ƿֱ����Ǳ��Ĵ�С��ħ��������ʱ�䡣
	Ȼ����A����������(���ǵ�0��,Ȼ���ǵ�1��,��2��......),
	ÿ������������B��,ÿ����C��������,�����Թ��Ĳ���,����0����·,1����ǽ��
�����

    ����ÿ���������,���Ignatius�ܹ���ħ������ǰ�뿪�Ǳ�,��ô�������������Ҫ���ٷ���,�������-1.
�������룺

	1
	3 3 4 20
	0 1 1 1
	0 0 1 1
	0 1 1 1
	1 1 1 1
	1 0 0 1
	0 1 1 1
	0 0 0 0
	0 1 1 0
	0 1 1 0 
���������

    11
*/
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
}