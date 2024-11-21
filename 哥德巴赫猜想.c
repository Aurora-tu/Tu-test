#include<stdio.h>
#include<math.h>
int isprime(int x) {
	int i,flag=1;
	for(i=2;i<=sqrt(x);i++){
		if(x%i==0){
			flag=0;
			break;
		}
	}
	return flag;
}
int main(){
	long long num;
	scanf("%lld",&num);
	if(num%2==0&&num>2){
	
	int i,j=0;
	for(i=2;i<num/2;i++){
		j=num-i;
		if(isprime(i)&&isprime(j)){
			printf("%lld=%d+%d\n",num,i,j);
		}
	}
}
	return 0;
}
