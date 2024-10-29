#include<stdio.h>
int main(){
	int m,n,i,k;
	int sum=0,cnt=0;
	 
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++){
		int isprime=1;
		for(k=2;k<i-1;k++){
			if(i%k==0){
				isprime=0;
				break;
			}
		}
		if(isprime){
			sum+=i;
			cnt++;
		}	
	}
	printf("素数个数：%d和：%d\n",cnt,sum);
	return 0;
}
