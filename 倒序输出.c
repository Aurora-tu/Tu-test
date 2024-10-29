#include<stdio.h>
int main(){
	int n,a,i,num;
	printf("几位数：");
	scanf("%d",&n) ;
	printf("数：");
	scanf("%d",&num);
	for(i=0;i<n;i++){
		a=num%10;
		printf("%d",a);
		num=num/10;
	} 
	return 0;
}

