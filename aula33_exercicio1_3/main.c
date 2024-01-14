#include <stdio.h>
#include <stdlib.h>

int main() {
/*
3) Faça um programa em C para trocar o valor de duas variáveis inteiras
sem utilizar nenhuma variável auxiliar.
*/
	int a, b;

    printf("\nDigite um número inteiro para a variável \"a\": ");
    scanf("%d", &a);
    printf("\nDigite um número inteiro para a variável \"b\": ");
    scanf("%d", &b);

	a += b;
	b = a - b;
	a -= b;

	printf("valor de \"a\": %d\tValor de \"b\": %d\n", a, b);

    return 0;
}
