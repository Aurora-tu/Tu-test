#include<stdio.h>

int main(){
	int i,num,minnum;
	printf("��һ������");
	scanf("%d",&num);
	minnum=num;
	for(i=2;i<=3;i++){
		printf("��%d������",i);
		scanf("%d",&num);
		if(num<minnum){
			minnum=num;
			printf("��ǰ��С��%d\n",minnum);
		}
	printf("��ǰ��С:%d\n",minnum);
		
	}
	return 0;
}

