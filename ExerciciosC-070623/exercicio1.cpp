#include<stdio.h>

int n, v;

int main () {
	printf("Digite um numero: ");
	scanf("%d", &n);
	
    for (int v = 1; v <= 10; v++) {
        printf("%d ", n * v);
    }
	
	return 0;
}
