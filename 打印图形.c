#include<stdio.h>
int main(){
	int i1,j1;
	for(i1=1;i1<=5;i1++){
		for(j1=1;j1<=i1;j1++){
			putchar('A');
		}
		printf("\n");
		
	}
	int i,j;
	for(i=5;i>=1;i--){
		for(j=1;j<=i;j++){
			putchar('B');
		}
		printf("\n");
		
	}
	return 0;
} 
