#include<stdio.h>
int main() {
	int a,b,c,n;
	a=n/100;
	b=n/10%10;
	c=n%10;
	
	for(n=100;n<1000;n++){
		if(n==a*a*a+b*b*b+c*c*c){
			printf("%d\n",n);
		}	
	} 
	return 0;
}
