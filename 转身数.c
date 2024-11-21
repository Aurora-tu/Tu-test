#include<stdio.h>
int main() {
	int N,i;
	scanf("%d", &N);
	for (i = 0; i < N; i++){
		int A, B,j;
		scanf("%d %d", &A, &B);
		int a = 0,count=0,a1=A;
		while (a1 % 10 == 0 && a1 > 0) {
			count++;
			a1 /= 10;
			
		}
			
		do {
			a = a * 10 + A % 10;
			A /= 10;
		} while (A != 0);
		printf("a %d\n",a);
		printf("count %d\n",count);
		for (j = 0; j < count; j++) {
			a = a* 10;
		}
		printf("a %d\n",a);
		printf("%d\n", a * B);
	}

	return 0;
}
