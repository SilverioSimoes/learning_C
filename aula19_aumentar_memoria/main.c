#include <stdio.h>
#include <stdlib.h>

int main() {
/*
	Aula 19 - Operador long para o tipo int na memória
	intervalo: -2147483648 até 2147483647
	%li ou %ld
*/
	long int x = 2147483647;
	long long int y = 999999999999999999;

	printf("Tamanho de long x em bytes: %d\n", sizeof x);

	printf("Valor de x: %ld\n", x);
	x++;
    printf("Valor de x: %li\n\n", x);

	printf("Tamanho de long long y em bytes: %d\n", sizeof y);
    printf("Valor de y: %lld\n", y);
    y++;
    printf("Valor de y: %lli\n", y);


/*	Tamanho em memória de int: 4 bytes
	Tamanho em memória de short int: 2 bytes
	Tamanho em memória de long int: 8 bytes
	Tamanho em memória de long long int: 8 bytes
	4 * 8 = 32 bits */

    return 0;
}
