#include<stdio.h>
int main(){
	int sum,i;
	while(i<=99){
		sum+=i;
		i=i+2;
	}
	printf("1+3+...+99=%d\n",sum);
	return 0;
	
}
