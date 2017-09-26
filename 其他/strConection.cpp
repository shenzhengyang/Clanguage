#include<stdio.h>
char a[100];
char b[100];
char c[100];
int main(){
	while(scanf("%s%s",a,b)!='\0'){
		int k=0;
		while(a[k]!=0){
			c[k]=a[k];
			k++;
		}
		int j=0;
		while(a[j]!=0){
			c[k++]=b[j++];
		}
		printf("%s\n",c);
	}
	return 0;
}