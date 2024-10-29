#include<stdio.h>
int main(){
	char a[100];
	int idx=0;
	a[idx];
	scanf("%s",&a);
	
	while(a[idx]!='\0'){
		if(a[idx]>='a'&&a[idx]<='z'){
		    a[idx]=a[idx]-32;
		}
		idx++;
		}
	printf("%s",a);
	return 0;
		
	}
	
	

