#include <stdio.h>
#include <stdlib.h>

int main() {
/*
	Aula 43 - Operador Ternário
	condição ? verdadeiro : falso
*/
	int a = 10;

    printf("\n\Digite um valor qualquer: ");
	scanf("%d", &a);

	printf("Operador Ternário\n");
	a < 0 ? printf("\n\tValor negativo!\n") : printf("\n\tValor positivo ou \
igual a zero!\n");

	printf("\n\nif/else\n");
	if(a < 0)
		printf("\n\tValor negativo!\n");
	else
		printf("\n\tValor positivo ou igual a zero!\n");

	printf("\nContinuação do programa...\n");

    return 0;
}
