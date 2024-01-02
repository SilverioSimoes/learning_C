#include <stdio.h>
#include <stdlib.h>

int main() {
/*
	Aula 13 - Ler dois caracteres e limpar o buffer
*/
	char a, b;

    printf("Digite uma letra: ");
    scanf(" %c", &a);

    printf("Digite outra letra: ");
    scanf(" %c", &b);

/*	espaço entre os %c => comando para o computador desconsiderar o ENTER,
	TAB e o ESPAÇO
	BUFFER => e\n f */
	printf("\nPrimeira letra: %c\nSegunda letra: %c", a, b);

    return 0;
}
