#include <stdio.h>
#include <stdlib.h>

int main() {
/*
	Aula 12 - Problemas na Leitura de dados
*/
	char sexo;
	int idade;
	float peso, altura;

    //printf("Digite idade, peso, altura e o sexo(f, F, m ou M): \n");
    //scanf("%d%f%f%c", &idade, &peso, &altura, &sexo);

    printf("Digite o idade: ");
    scanf("%d", &idade);

    printf("Digite o peso: ");
    scanf("%f", &peso);

    printf("Digite o altura: ");
    scanf("%f", &altura);

    printf("Digite o sexo(f, F, m ou M): ");
    scanf(" %c", &sexo);

    // buffer do teclado => 46\n88.0\n1.80\n

    printf("\n\nSexo: %c\nIdade: %d\nPeso: %.1f\nAltura: %.2f\n", sexo, idade, peso, altura);

    return 0;
}
