#include<stdio.h> 
int main() {
    int A, B = 0, C = 0, i, j;
    scanf("%d", &A);
    for (i = 2; i < A; i++) {
        if (A % i == 0) {
            B += i;
        }
        printf("����%d\n",B);
    }
    if (B == 0) {
        printf("���ж�%d", -1);
    }
    else {
        
            for (j = 2; j < B; j++) {
                if (B % j == 0) {
                    C += j;
                }
                printf("C%d\n",C);
            }
            if (A == C) {
                printf("AC��%d\n", B);
            }
            else {
                printf("%d\n", -1);
            }
        }
        return 0;
    }


    
    
