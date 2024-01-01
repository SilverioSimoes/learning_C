#include <stdio.h>
#include <stdlib.h>

int main() {

    /* Aula 05 - Lendo Números Reais
	   tipo nome; */
	   float PI = 3.14159;
	   float n;

    printf("\nValor de PI: %.2f\n\n", PI);

    printf("Digite um numero real: ");
	scanf("%f", &n);

	printf("Valor lido: %.3f\n", n);

    return 0;
}
