#include<stdio.h>
int main() {
	int N,i;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		int M,j,a,b,c,count=0;
		double score = 0.0;
		char op,x;
		scanf("%d", &M);
        int turenum=0;
		for (j = 0; j <M; j++) {
			scanf("%d%c%d=%d", &a, &op, &b, &c);
			if (op == '+') {
                turenum=a+b;
				if (turenum== c) {
					count++;
				}
			}
			else if (op == '-') {
                turenum=a-b;
				if (turenum== c) {
					count++;
				}
			}
			else if (op == '*') {
                turenum=a*b;
				if (turenum== c) {
					count++;
				}
			}
			else if (op == '/') {
                if(b==0){
                    continue;
                }else{
                    turenum=a/b;
				if (turenum== c) {
					count++;
				}
                }

			}
			 
			
		}
		score = (100.0/ M) * count;
		printf("%.2lf\n",  score);
	}
	return 0;
}

