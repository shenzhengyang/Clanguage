//% ������� 
/**
*��������С��10000��������A��B��
*����A+B��
*��Ҫע����ǣ����A��B��ĩβK��������8��λ������ͬ����ֱ�����-1
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