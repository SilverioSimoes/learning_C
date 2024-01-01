#include <stdio.h>
#include <stdlib.h>

int main() {
/*
	Aula 08 - Lendo Caracteres
	função getc()
*/
	char letra;

    printf("Digite um caracter: ");
    letra = getc(stdin);

    printf("Caracter lido: %c\n", letra);

    return 0;
}
