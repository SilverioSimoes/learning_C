#include <stdio.h>
#include <stdlib.h>

// Caractere de escape para saltar uma linha -> \n

int main() {

    //printf é uma função de saída
    printf("\n----------------------------------------------------------\n");
    printf("      1 - Logar    2 - Cadastrar    3 - Imprimir");
    printf("\n----------------------------------------------------------\n");

    printf("\nOlá. \nSeja \nbem \nvindo!\n");

    printf("\nValor retornado: %d\n\n", 7);

    printf("\nValor retornado: %d\n\n", printf("Oi"));



    return 0;
}
