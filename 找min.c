#include<stdio.h>

int main(){
	int i,num,minnum;
	printf("第一个数：");
	scanf("%d",&num);
	minnum=num;
	for(i=2;i<=3;i++){
		printf("第%d个数：",i);
		scanf("%d",&num);
		if(num<minnum){
			minnum=num;
			printf("当前最小：%d\n",minnum);
		}
	printf("当前最小:%d\n",minnum);
		
	}
	return 0;
}

