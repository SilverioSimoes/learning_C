#include <stdio.h>
#include <stdlib.h>

int main() {
/*
	Aula 24 - Operações matemáticas básicas
	soma			-> +
	Subtração		-> -
	Multiplicação	-> *
	Divisão			-> /
*/
    printf("\nSoma: %d\n", 10 + 20);
    printf("\nSubtração: %d\n", 10 - 20);
	printf("\nMultiplicação: %d\n", 10 * 20);
	printf("\nDivisão: %f\n", 10.0 / 20);/* Para que o resultado da divisão entre
	dois números inteiros seja um número real é necessário converter ao  menos
	um dos dois em um número real */
    return 0;
}
