#include<stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	double sum,dm,dz,t;
	dm=2; 
	dz=1;
	for(i=1;i<n;i++){
		sum+=dm/dz;
		t=dm;
		dm=dm+dz;
		dz=t;
		
	}
	printf("%.2lf",sum);
	return 0; 
	
}
