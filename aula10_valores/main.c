#include <stdio.h>
#include <stdlib.h>

int main() {
/*
	Aula 10 - Lendo vários valores
	função getchar()
*/
	int n1, n2, n3;

    printf("Digite três valores inteiros: ");
    scanf("%d%d%d", &n1, &n2, &n3);

    printf("Valores lidos: %d, %d e %d\n", n1, n2, n3);

    return 0;
}
