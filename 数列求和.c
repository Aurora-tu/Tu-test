#include<stdio.h>
int main(){
	int a=1,b=3,n,x=3;
	double sum=1+1.0/3,c=0.0;
	for(n=1;n<=10;n++){
		//printf("��%d��\n",n);���ѭ�������� 
		
		a=a*(n+1);
		x=x+2;
		b=b*x;
		c=(a*1.0)/b;
		sum+=c;
		//printf("a=%d,b=%d,c=%lf,sum=%lf\n",a,b,c,sum);��� 
	}
	printf("%.3f",sum);
	return 0;
	
} 
