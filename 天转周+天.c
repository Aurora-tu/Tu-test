#include<stdio.h>
int main(){
	int a,week,day;
	printf("天数：");
	scanf("%d",&a);
	week=a/7;
	day=a%7;
	printf("%d周%d天\n",week,day);
	return 0;
}
