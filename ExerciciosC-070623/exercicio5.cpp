#include <stdio.h>

int main() {
    int numero;
    int contadorPares = 0;

    printf("Digite numeros (digite um numero impar para parar):\n");

    while (1) {
        scanf("%d", &numero);

        if (numero % 2 != 0) {
            break;
        }

        contadorPares++;
    }

    printf("Você digitou %d numeros pares.\n", contadorPares);

    return 0;
}

