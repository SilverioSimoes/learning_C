#include <stdio.h>
#include <stdlib.h>

int main() {
/*
	Aula 29 - Operador unsigned
	trocar o %d por %u
	limite para o tipo int: -2.147.483.647 ... 2.147.483.647
	limite para o tipo unsigned int: 0 ... 4.294.967.294
	short int -> %d ou %hi
	unsigned short int -> %u ou %hu
*/
	unsigned int x = 2147483647;
	unsigned short int y = 65535;
	unsigned long int z = 4294967294;

	printf("\nValor unsigned int: %u\n", x);
	printf("Valor unsigned int: %u\n\n", ++x);

	printf("Valor unsigned int: %lu\n", z);
	printf("Valor unsigned int: %u\n\n", (unsigned int)z + 1);

	printf("Valor unsigned short int: %d\n", y);
	printf("Valor unsigned short int: %d\n\n", ++y);

	printf("Valor unsigned long int: %lu\n", z);
	printf("Valor unsigned long int: %lu\n\n", ++z);

	printf("sizeof unsigned int =======>\t%d\n", sizeof(unsigned int));
	printf("sizeof unsigned short int =>\t%d\n", sizeof(unsigned short int));
	printf("sizeof unsigned long int ==>\t%d\n", sizeof(unsigned long int));

    return 0;
}
