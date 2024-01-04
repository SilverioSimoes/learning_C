#include <stdio.h>
#include <stdlib.h>

int main() {
/*
	Aula 26 - Operador de resto da divisão
*/
	int a = 10, b = 20;

	printf("\nResto da divisão inteira: %d\n", a % 2);// Resto 0 número é par
	printf("\nResto da divisão inteira: %d\n", 11 % 2);/* Resto diferente de
	0 número é ímpar */
	printf("\nResto da divisão inteira: %d\n", b % a);
	printf("\nResto da divisão inteira: %d\n", a % b);/* Para que o resultado
	da divisão entre dois números inteiros seja um número  real  é necessário
	converter ao  menos	um dos dois em um número real */
    return 0;
}
