#include<stdio.h>
#include<stdlib.h>
#define N 5
int main(){
	FILE*sfile;
	int i;
	char stuid[10],name[20];
	float score;
	sfile=fopen("score.txt","w");
	fprintf(sfile,"ѧ��\t����\t��ѧ�ɼ�\n");
	for(i=0;i<N;i++){
		printf("����ѧ�š���������ѧ�ɼ����ո�ֿ�����");
		scanf("%s%s%f",stuid,name,&score) ;
		fprintf(sfile,"%s\t%s\t%f\n",stuid,name,score);
	}
	fclose(sfile);
	
	
	
	return 0;
	
	
}
