#include<stdio.h>
int main(){
	int a,b,c,d,num,i,j,temp,max=0,min=0;
	scanf("%d",&num);
	do{
	
	d=num%10;
	num/=10;
	c=num%10;
	num/=10;
	b=num%10;
	a=num/10;
	for (i = 0; i < 3; i++) {
        if (a < b) {
            temp = a;
            a = b;
            b = temp;
        }
        if (b < c) {
            temp = b;
            b = c;
            c = temp;
        }
        if (c < d) {
            temp = c;
            c = d;
            d = temp;
        }
    }
    max=a*1000+b*100+c*10+d;
    for (j= 0; j< 3; j++) {
        if (a >b) {
            temp = a;
            a = b;
            b = temp;
        }
        if (b > c) {
            temp = b;
            b = c;
            c = temp;
        }
        if (c > d) {
            temp = c;
            c = d;
            d = temp;
        }
    }
    min=a*1000+b*100+c*10+d;
    num=max-min;
    printf("%d-%d=%d\n",max,min,num);
}while(num!=6174);
    return 0;
    
} 
