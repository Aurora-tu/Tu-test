#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
    int arr[1000];
    int index=0;
    arr[index++]=n;
	
	while(n!=1){
		if(n%2==1){
			n=n*3+1;
		}else{
			n=n/2;
		}
		arr[index++]=n;
		
		}
	int i;
	for (i=index-1;i>=0;i--){
		printf("%d\ ",arr[i]);	
	
	}
	return 0;
	
	}
    
    

