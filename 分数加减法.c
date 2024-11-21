#include<stdio.h>
int main() {
	char input_str[100];  
    while (scanf("%s", input_str)!= EOF){
	
	int a, b, c, d,num1,num2;
	char fuhao;
	sscanf(input_str,"%d/%d%c%d/%d", &a, &b, &fuhao, &c, &d);
	num2=b*d;
	if(fuhao=='+'){
		num1=a*d+c*b;
	}else if(fuhao=='-'){
		num1=a*d-c*b;
	}else{
		printf("输入的运算符不合法，请重新输入\n");
            continue;  
	}
	int n=num1,m=num2;
	while(n!=0){
		int temp=n;
		n=m%n;
		m=temp;//最大公约数m
	}
	num1/=m;
	num2/=m;
	if(num2<0){
		num2=-num2;
		num1=-num1;
	}
	if (num2 == 1) { 
            printf("%d\n", num1);
        } else {
            printf("%d/%d\n", num1, num2);
        }
    
	
}
	return 0;

}
