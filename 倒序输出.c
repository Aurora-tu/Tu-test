#include<stdio.h>
int main(){
	int n,a,i,num;
	printf("��λ����");
	scanf("%d",&n) ;
	printf("����");
	scanf("%d",&num);
	for(i=0;i<n;i++){
		a=num%10;
		printf("%d",a);
		num=num/10;
	} 
	return 0;
}

