#include<stdio.h>
#include<stdlib.h>
#define N 5
int main(){
	FILE*sfile;
	int i;
	char stuid[10],name[20];
	float score;
	sfile=fopen("score.txt","w");
	fprintf(sfile,"学号\t姓名\t入学成绩\n");
	for(i=0;i<N;i++){
		printf("输入学号、姓名和入学成绩（空格分开）：");
		scanf("%s%s%f",stuid,name,&score) ;
		fprintf(sfile,"%s\t%s\t%f\n",stuid,name,score);
	}
	fclose(sfile);
	
	
	
	return 0;
	
	
}
