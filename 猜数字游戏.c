#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	srand(time(0));
	int num=rand()%100+1;
	int n=0;
	int a;
	printf("�и�1-100�����\n");
	do {
		printf("���²¿��ɣ�");
		scanf("%d",&a);
		n++;
		if(a<num){
			printf("���С��\n");
		} 
		else if(a>num) {
			printf("��´���\n");
		}
		else{printf("��ϲ��");}
		
	}while(a!=num);
	printf("������%d�ξͲ¶��ˣ�����̫����\n",n);
	return 0;
	 
	
}
