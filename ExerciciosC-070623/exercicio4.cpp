#include <stdio.h>

int main() {
    int numero;
    int fatorial = 1;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for (int i = numero; i >= 1; i--) {
        fatorial *= i;
    }

    printf("Fatorial = %d\n", fatorial);

    return 0;
}

