#include <stdio.h>
#include <stdlib.h>

int main() {
/*
	Aula 28 - Operador de decremento --
	contador--;
	contador -= 1;
	contador = contador - 1;
*/
	int contador = 10;

	printf("\nValor: %d\n", contador--);
	printf("\nValor: %d\n", contador);
	printf("\nValor: %d\n", --contador);

    return 0;
}
