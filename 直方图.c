#include<stdio.h>
#include <stdlib.h>
int maxnum(int count[],int size){
    int max=count[0];
    int i;
    for(i=1;i<size;i++){
        if(count[i]>max){
            max=count[i];
        }
    }
    return max;
}
void printChar(int count[], int row, int col) {
    if (count[col] >= row) {
        
        int isMax = 1;
        for (int otherCol = 0; otherCol < 5; otherCol++) {
            if (otherCol!= col && count[otherCol] > count[col]) {
                isMax = 0;
                break;
            }
        }
        if (isMax) {
            printf("*\n");
        } else {
            printf("*");
        }
    } else {
        printf(" ");
    }
}

int main(){
    int repeat,i;
    scanf("%d",&repeat);
    for(i=0;i<repeat;i++){
        int n,x,a[5]={0,0,0,0,0},j;
        scanf("%d",&n);
        for(j=0;j<n;j++){
            scanf("%d",&x);
            switch(x){
                case 1: a[0]++;break;
                case 2: a[1]++;break;
                case 3: a[2]++;break;
                case 4: a[3]++;break;
                case 5: a[4]++;break;
            }
        }
        int k=maxnum(a,5),b,c;
        for(b=k;b>0;b--){
            for(c=0;c<5;c++){
                 printChar(a, b, c);	
					}
				}
            
            
        
        printf("1 2 3 4 5\n");
        
    }
    return 0;
}

