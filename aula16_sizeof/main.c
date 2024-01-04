#include <stdio.h>
#include <stdlib.h>

int main() {
/*
	Aula 16 - Operador sizeof

	sizeof x ou sizeof(int)
*/
	float x = 1.0;

	printf("Tamanho em memória de um float: %d bytes\n", sizeof(x));
	// Tamanho em memória de um float: 4 bytes
    printf("Tamanho em memória de int: %d bytes\n", sizeof(int));
    // Tamanho em memória de int: 4 bytes

    // 4 * 8 = 32 bits

    return 0;
}
