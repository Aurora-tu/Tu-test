#include<stdio.h>
int minnum(int a,int b,int c){
	int min=a;
	if(b<=min) min=b;
	if(c<=min) min=c;
	return min;
}
int main(){
	int n1,n2,n3;
	printf("输入3个数：");
	scanf("%d%d%d",&n1,&n2,&n3);
	int min;
	min=minnum(n1,n2,n3);
	printf("最小的数是：%d",min);
	return 0;
}
