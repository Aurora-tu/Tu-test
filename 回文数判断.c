#include<stdio.h>
int daoxu(int num){
    int temp = num;
    int reverse = 0;

    while (temp!= 0) {
        reverse = reverse * 10 + temp % 10;
        temp /= 10;
    }

    if (num == reverse) {
        return 1;
    } else {
        return 0;
    }
}




int main(){
    int num,rm=0;
    while(scanf("%d",&num)!=EOF){
    	
    	if(daoxu(num)){
    		printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}

