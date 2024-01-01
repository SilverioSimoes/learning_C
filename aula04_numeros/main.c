#include <stdio.h>
#include <stdlib.h>

// Aula 4 - Lendo Números Inteiros

int main() {

    int valor, valor2;// Criei uma variável para guardar um valor do tipo inteiro
    // Atribuição -> atribuir um valor a uma variável
    valor = 50;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    printf("Digite um segundo valor inteiro: ");
    scanf("%d", &valor2);

    printf("\n\nPrimeiro valor: %d\nSegundo valor: %d\n\n", valor, valor2);

    return 0;
}
