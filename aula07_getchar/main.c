#include <stdio.h>
#include <stdlib.h>

int main() {
/*
	Aula 07 - Lendo Caracteres
	função getchar()
*/
	char letra;

    printf("Digite uma letra: ");
    letra = getchar();

    printf("Caracter lido: %c\n", letra);

    return 0;
}
