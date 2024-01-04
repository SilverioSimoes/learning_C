#include <stdio.h>
#include <stdlib.h>

int main() {
/*
	Aula 18 - Tamanho de um int na memória
	intervalo: -2147483648 até 2147483647
	%i ou %d

*/
	int x = 2147483647;

	printf("Valor de x: %d\n", x);
	x++;
    printf("Valor de x: %i\n", x);

/*	Tamanho em memória de int: 4 bytes
	Tamanho em memória de short int: 2 bytes
	4 * 8 = 32 bits */

    return 0;
}
