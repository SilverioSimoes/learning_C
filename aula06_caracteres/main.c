#include <stdio.h>
#include <stdlib.h>

int main() {

/*
	Aula 06 - Lendo Caracteres
	tipo nome;					*/
	char sexo = "m";

    printf("Valor da variável sexo: %c\n", sexo);

    printf("Digite seu sexo(f, F, n ou M): ");
    scanf("%c", &sexo);

    printf("Valor da variável sexo: %c\n", sexo);

    return 0;
}
