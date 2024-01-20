#include <stdio.h>
#include <stdlib.h>

int main() {
/*
	Aula 101 - Como preencher um vetor por meio do teclado?
*/
	int i;
	int num[10] = {1,5,9,15,43};

	for(i = 0; i < 5; i++){
		printf("Digite o elemento da posição %d: ", i);
		scanf("%d", &num[i]);
	}

	for(i = 0; i < 5; i++)
		printf("Elemento %d: %d\n", i, num[i]);
	printf("\n\n");

    return 0;
}
