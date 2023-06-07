#include<stdio.h>

int main () {
	float nota;
	int qtdNotas = 0;
	
	while (1) {
		printf("Digite uma nota (0 a 10): ");
		scanf("%f", &nota);
		if (nota > 10 || nota < 0) {
			break;
		}
		qtdNotas++;
	}
	printf("Foram digitadas %d notas validas.\n", qtdNotas);
}
