#include<stdio.h>
int main(){
	long long n;
	int a=0,b=0,x=1,i=0,j=0;
	scanf("%lld",&n);
	do{
		if(x%2==0){
			a=a*10+n%10;
		}else{
			b=b*10+n%10;
		}
		n/=10;
		x++;
	}while(n!=0);
	while(a!=0){
		i=i+a%10;
		printf("%d",i);
		a/=10;
	}
	printf(" ");
	while(b!=0){
		j=j+b%10;
		printf("%d",j);
		b/=10;
	}

	return 0;
	
} 
