#include<stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for (i=1;i<=n;i++){
		scanf("%d",&arr[i]);
	}
	
	for (i=1;i<=n;i++){
		
	
		if(arr[i]==1){
			printf("1\n");
		}
		else if(arr[i]==2){
			printf("1\n");
		}else{
			int num1=1,num2=1,sum,j;
			for(j=2;j<=arr[i];j++){
			
			  sum=num1+num2;
			  num1=num2;
			  num2=sum;	
			}
			printf("%d\n",sum);
		}
		
	
	}
	return 0;
}
