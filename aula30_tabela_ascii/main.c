#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
/*
	Aula 30 - Tabela ASCII e Acentuação
	1 byte(8 bits)  -> -128 até 127
	unsigned 1 byte -> 0 até 255

	9 é o caractere de tabulação \t
	10 é o caractere de nova linha \n(enter)
	65 é a letra A maiúscula
	66 é a letra B maiúscula
	90 é a letra Z maiúscula

	1ª = setelocale(LC_ALL, NULL);// padrão da linguagem C
	2ª = setelocale(LC_ALL, "");// padrão ddo sistema operacional Windows
	3ª = setelocale(LC_ALL, "Portuguese");// Português brasileiro
*/

	printf("\nf: %d\n", 'f');
	printf("102: %c\n", 102);
	printf("103: %c\n", 103);
	printf("65:  %c\n", 65);
	printf("A:   %d\n\n", 'A');

	//setlocale(LC_ALL,"");
	//setlocale(LC_ALL,NULL);
	printf("%s\n", setlocale(LC_ALL,NULL));
	//printf("%s\n", setlocale(LC_ALL,""));
	printf("Coração\n");

    return 0;
}
