#include <stdio.h>
#include <stdlib.h>

int main() {
/*
	Aula 99 - Como criar um vetor?
*/
	int idade;
	char sexo;
	float n1;

	int num1[10];
	int num2[] = {1,5,9,15,43};
	int num3[5] = {4,7,5};/*As posições que não foram informadas serão
	preenchidas com 0 */
	int num4[5] = {1,2,3,4,5,6};//As posições excedentes serão ignoradas
	int num5[5] = {0};//Todas as posições serão preenchidas com 0

	char letras[100];
	char vogais[5] = {'a','e','i','o','u'};

	float notas[3] = {7.5,8.3,9.5};

    printf("nota: %.1f\n", notas[2]);
    return 0;
}
