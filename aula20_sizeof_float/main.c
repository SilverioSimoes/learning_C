#include <stdio.h>
#include <stdlib.h>

int main() {
/*
	Aula 20 - Tamanho de um float na memória
	intervalo: -2147483648 até 2147483647
	%f
*/
//	short float a = 3.14159;// não é possível short e um float
//	long float b = 3.14159;// não é possível long e um float
	float c = 3.14159;

	printf("Tamanho de float em bytes: %d\n", sizeof c);
	printf("Tamanho de float em bytes: %d\n", sizeof(float));

/*	Tamanho em memória de int: 4 bytes
	Tamanho em memória de short int: 2 bytes
	Tamanho em memória de long int: 8 bytes
	4 * 8 = 32 bits */

    return 0;
}
