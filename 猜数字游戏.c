#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	srand(time(0));
	int num=rand()%100+1;
	int n=0;
	int a;
	printf("有个1-100间的数\n");
	do {
		printf("来猜猜看吧：");
		scanf("%d",&a);
		n++;
		if(a<num){
			printf("你猜小了\n");
		} 
		else if(a>num) {
			printf("你猜大了\n");
		}
		else{printf("恭喜你");}
		
	}while(a!=num);
	printf("你用了%d次就猜对了，真是太棒了\n",n);
	return 0;
	 
	
}
