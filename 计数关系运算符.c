#include<stdio.h>
#include<string.h> 
int main(){
	char str[100];
	int i,n=0,x1=0,x2=0,x3=0,x4=0,x5=0,x6=0;//<,>,<=,>=,==,!=
	scanf("%s",str);
	n=strlen(str);
	str[n]='\0';
	for(i=0;i<=n;i++){
		if(str[i]=='<'){
			if(str[i+1]=='='){
				x3++;
			}else{
				x1++;
			}
		}else if(str[i]=='>'){
			if(str[i+1]=='='){
				x4++;
			}else{
				x2++;
		}
		}else if(str[i]=='='&&str[i+1]=='='){
			x5++;
		}else if(str[i]=='!'&&str[i+1]=='='){
			x6++;
		}
	}
	printf("%d %d %d %d %d %d",x1,x2,x3,x4,x5,x6);
	return 0;
	
}
