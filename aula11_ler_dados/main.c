#include <stdio.h>
#include <stdlib.h>

int main() {
/*
	Aula 11 - Leitura de dados
*/
	char sexo;
	int idade;
	float peso, altura;

    printf("Digite o sexo(f, F, m ou M): ");
    scanf("%c", &sexo);

    printf("Digite o idade: ");
    scanf("%d", &idade);

    printf("Digite o peso: ");
    scanf("%f", &peso);

    printf("Digite o altura: ");
    scanf("%f", &altura);

    printf("\n\nSexo: %c\nIdade: %d\nPeso: %.2f\nAltura: %.2f\n", sexo, idade, peso, altura);

    return 0;
}
