#include <stdio.h>
#include <stdlib.h>

int main() {
/*
	Aula 21 - Tamanho de um double na memória
	%lf
*/
	float x = 3.14159;
	double y = 3.14159265358979;

	printf("Tamanho de float em bytes: %ld\n", sizeof x);
	printf("Tamanho de double em bytes: %ld\n\n", sizeof y);

	printf("Valor de float x: %.15f\n", x);
	printf("Valor de double y: %.15f\n", y);

/*	Tamanho em memória de int: 4 bytes
	Tamanho em memória de short int: 2 bytes
	Tamanho em memória de long int: 8 bytes
	Tamanho em memória de double: 8 bytes
	4 * 8 = 32 bits */

    return 0;
}
