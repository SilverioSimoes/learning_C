#include <stdio.h>
#include <stdlib.h>

int main() {
/*
	Aula 22 - Operador long para o tipo double
	double -> %lf
	long double -> %Lf
*/
	float x = 3.14159;
	long double y = 3.14159265358979323846;

	printf("Tamanho de float em bytes: %ld\n", sizeof x);
	printf("Tamanho de long double em bytes: %ld\n\n", sizeof y);

	printf("Valor de float x: %f\n", x);
	printf("Valor de long double y: %Lf\n", y);

/*	Tamanho em memória de int: 4 bytes
	Tamanho em memória de short int: 2 bytes
	Tamanho em memória de long int: 8 bytes
	Tamanho em memória de double: 8 bytes
	4 * 8 = 32 bits */

    return 0;
}
