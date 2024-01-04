#include <stdio.h>
#include <stdlib.h>

int main() {
/*
	Aula 25 - Casting/Conversão de tipos
*/
	int a = 10, b = 20;
	float pi = 3.14159;

	printf("\nValor de pi:\t%d\n", (int)pi);
    printf("\nSoma:\t\t%d\n", a + b);
    printf("\nSubtração:\t%d\n", a - b);
	printf("\nMultiplicação:\t%d\n", a * b);
	printf("\nDivisão:\t%f\n", (float)a / b);/* Para que o resultado da divisão entre
	dois números inteiros seja um número real é necessário converter ao  menos
	um dos dois em um número real */
    return 0;
}
