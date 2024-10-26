#include<stdio.h>
#include<stdlib.h>
 

int main(){
	FILE*strfile;
	char s[100];
	int i=0;
	printf("ÊäÈë×Ö·û´®£º");
	scanf("%s",s); 
	
	strfile=fopen("zfc.txt","w");
	gets(s); 
	for(i=0;s[i]!='\0';i++){
		
		fprintf(strfile,"%c\n",s[i]);
	}
	fclose(strfile);

	
	
	return 0;
}
