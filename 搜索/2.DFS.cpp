//深度有限搜索
/**
题目描述：

	The doggie found a bone in an ancient maze, which fascinated him a lot. However, when he picked it up, the maze began to shake, and the doggie could feel the ground sinking. He realized that the bone was a trap, and he tried desperately to get out of this maze.
	The maze was a rectangle with sizes N by M. There was a door in the maze. At the beginning, the door was closed and it would open at the T-th second for a short period of time (less than 1 second). Therefore the doggie had to arrive at the door on exactly the T-th second. In every second, he could move one block to one of the upper, lower, left and right neighboring blocks. Once he entered a block, the ground of this block would start to sink and disappear in the next second. He could not stay at one block for more than one second, nor could he move into a visited block. Can the poor doggie survive? Please help him.
输入：

	The input consists of multiple test cases. The first line of each test case contains three integers N, M, and T (1 < N, M < 7; 0 < T < 50), which denote the sizes of the maze and the time at which the door will open, respectively. The next N lines give the maze layout, with each line containing M characters. A character is one of the following:
	'X': a block of wall, which the doggie cannot enter; 
	'S': the start point of the doggie; 
	'D': the Door; or
	'.': an empty block.
	The input is terminated with three 0's. This test case is not to be processed. 
输出：

	For each test case, print in one line "YES" if the doggie can survive, or "NO" otherwise.
样例输入：

	4 4 5
	S.X.
	..X.
	..XD
	....
	3 4 5
	S.X.
	..X.
	...D
	0 0 0
样例输出：

	NO
	YES
提示：

	用scanf读取输入。
*/
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
        //寻找D的位置坐标 
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
}