#include <stdio.h>
#include <stdlib.h>

int main() {
/*
	Aula 42 - Endentação e uso de chaves
*/
	int a = 10;

    printf("\n\Digite um valor qualquer: ");
	scanf("%d", &a);

	printf("\nResultado lógico: %d\n", a < 0);

	if(a < 0){
		printf("\n\tValor negativo!\n");
		printf("\n\tValor negativo!\n");
	}else{
		printf("\n\tValor positivo ou igual a zero!");
		printf("\n\t**Valor positivo ou igual a zero!**");
	}
	printf("\nContinuação do programa...\n");

    return 0;
}
