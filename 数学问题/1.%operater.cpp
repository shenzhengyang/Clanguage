//% 运算符号 
/**
*读入两个小于10000的正整数A和B，
*计算A+B。
*需要注意的是：如果A和B的末尾K（不超过8）位数字相同，请直接输出-1
*/
#include<stdio.h>
int main(){
	int a,b,k;
	int i;
	while(scanf("%d%d",&a,&b)!=EOF){
		if(a==0&&b==0) break;
		scanf("%d",&k);
		int tag=0;
		int a_tmp=a,b_tmp=b;
		for(i=0;i<k;i++){
			if(a_tmp%10!=b_tmp%10){
				tag=1;
				break;
			}
			a_tmp=a_tmp/10;
			b_tmp=b_tmp/10;
		}
		if(tag==1) printf("%d\n",a+b);
		else printf("-1\n");
	}
	return 0;
}