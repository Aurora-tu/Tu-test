#include<stdio.h>
#include<stdbool.h>
int main() {
	int a=2;
	printf("%d\n",a);
	printf("%d\n",5>1);
	printf("%d\n",4>5);
	printf("%d\n",3!=2);
	bool bol_1,bol_t=true,bol_f=false;
	bol_1=5>1;
	printf("%d,%d,%d\n",bol_1,bol_t,bol_f);
	if(1){
		printf("true\n");
	}
	printf("练习输出浮点数\n");
	double pi=3.1415926535898;
	printf("%f,%4f,%-4f,%4.3f\n",pi,pi,pi,pi);//3.141593，3.14，3.142 
	printf("浮点数的比较和运算\n");
	double a1=0.015+0.045;
	double a2=0.05+0.01;
	double a3=0.03+0.03;
	double a4=0.02+0.04;
	double a5=0.07-0.01;
	double sum=0;
	int i;
	for(i=1;i<=10;i++){
		sum+=0.01;
		if(sum!=0.01*i)
			printf("有问题：sum=%f\n",sum);
	} //检查浮点数转换
	printf("a1~a5:%f,%f,%f,%f,%f",a1,a2,a3,a4,a5);
	if("a1==o.o6\n")
		printf("a1=0.06\n");
	if("a2==0.06\n") 
		printf("a2=0.06\n");
	if("a3==o.o6\n")
		printf("a3=0.06\n");
	if("a4==o.o6\n")
		printf("a4=0.06\n");
	if("a5==o.o6\n")
		printf("a5=0.06\n");
	return 0;

}
