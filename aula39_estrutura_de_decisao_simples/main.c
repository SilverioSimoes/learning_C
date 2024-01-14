#include <stdio.h>
#include <stdlib.h>

int main() {
/*
	Aula 39 - Estrutura de Decisão Simples

	Verificando se um número é negativo

	Brasilia é a capital do Brasil? sim = 1 ou não = 0
*/
	int a = 10;

    printf("\n\Digite um valor qualquer: ");
	scanf("%d", &a);

	if(a < 0)
		printf("\n\tValor negativo!\n");

	printf("\nContinuação do programa...\n");

    return 0;
}
