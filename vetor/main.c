#include <stdio.h>
#include <stdlib.h>

int main(){
    int num[100] = {1}; /* Declara um vetor de inteiros de 100 posições */
    //int count=0;
    //int totalnums;

    int idade;
    char sexo;
    float n1;

    int i;
    char num1[10] = {'a'};
    int num2[] = {1,5,9,15,43};
    int num3[5] = {4,7,5};
    int num4[5] = {1,2,3,4,5,6};
    int num5[5] = {0};

    char letras[100];
    char vogais[5] = {'a','e','i','o','u'};

    float notas[3] = {7.5,8.3,9.5};

    printf("%i\n", num2[0]);
    printf("%i\n", num2[1]);

    for(i=0; i < 4; i++)
        printf("%s", vogais);

    return 0;
}
