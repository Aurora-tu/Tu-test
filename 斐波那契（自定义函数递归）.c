#include<stdio.h>
#include<stdlib.h>
long f(int n) {
	if (n==1||n==2) return 1;
	else {
		return f(n-1)+f(n-2);

	}

}
int main() {
	long a=f(50);
	printf("%ld",a); 
	return 0;
}
