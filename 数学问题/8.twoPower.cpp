//�� A^B �����λ��ʾ��������
/**
* �������� �����㷨 ������������
double power(double a,unsigned int b)  
{  
    if(b==0)  
        return 1;  
    if(b==1)  
        return a;  
    double result=power(a,b>>1);//b>>b/2   
    result*=result;  
    if(b & 0x1==1)//a & 0x1�൱��a%2   
        result*=a;  
    return result;  
} 
*/
/**
* �������� ѭ���㷨
int power(int a,int b)  
{  
    int ans=1;  
    while(b!=0)  
    {  
        if(b%2==1)  
            ans*=a;  
        b/=2;  
        a*=a;  
    }  
    return ans;  
}  
*/
#include<stdio.h>
int main(){
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF){
		if(a==0&&b==0) break;
		int ans=1;
		while(b!=0){
			if(b%2==1){
				ans*=a;
				ans%=1000;
			}
			b/=2;
			a*=a;
			a%=1000;
		}
		printf("%d\n",ans);
	}
	return 0;
}