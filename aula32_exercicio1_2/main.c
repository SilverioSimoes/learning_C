#include <stdio.h>
#include <stdlib.h>

int main() {
/*
	2) Elabore um algoritmo que receba, por meio do teclado, dois valores,  um
	para  a variável “a” e um para a variável “b”. Em seguida, faça os  passos
	que julgar necessário para que ao final, a variável	“a” possua o valor que
	inicialmente estava em “b” e a variável “b” possua o valor que inicialmente
	estava em “a”. Traduza seu algoritmo para a linguagem C e exiba os valores
	na tela.
*/
	int a, b, c;


    printf("\nDigite um número inteiro para a variável \"a\": ");
    scanf("%d", &a);
    printf("\nDigite um número inteiro para a variável \"b\": ");
    scanf("%d", &b);

	c = a;
	a = b;
	b = c;

	printf("valor de \"a\": %d\tValor de \"b\": %d\n", a, b);

    return 0;
}
