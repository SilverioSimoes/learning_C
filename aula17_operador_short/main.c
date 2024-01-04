#include <stdio.h>
#include <stdlib.h>

int main() {
/*
	Aula 17 - Operador short para o tipo int
	intervalo: -32768 até 32767
	%hi ou %d

	short x ou short(int)
*/
	int y = 0;
	short int x = 32767;

	//printf("Tamanho em memória de um int: %d bytes\n", sizeof y);
	printf("Valor de x: %d\n", x);
	x++;
    //printf("Tamanho em memória de short int: %d bytes\n", sizeof x);
    printf("Valor de x: %hi\n", x);
/*	Tamanho em memória de int: 4 bytes
	Tamanho em memória de short int: 2 bytes
	4 * 8 = 32 bits */

    return 0;
}
