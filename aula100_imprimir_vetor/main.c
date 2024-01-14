#include <stdio.h>
#include <stdlib.h>

int main() {
/*
	Aula 100 - Como imprimir o conteúdo de um vetor na tela?
*/
	int i;
	int num[] = {1,5,9,15,43};
	char vogais[5] = {'a','e','i','o','u'};
	float notas[3] = {7.5,8.3,9.5};

	for(i = 0; i < 5; i++)
		printf("num: %d\n", num[i]);
	printf("\n\n");

	for(i = 0; i < 5; i++)
		printf("vogais: %c\n", vogais[i]);
	printf("\n\n");

	for(i = 0; i < 3; i++)
		printf("notas: %.1f\n", notas[i]);
	printf("\n\n");


    printf("nota: %.1f\n", notas[0]);
    return 0;
}
