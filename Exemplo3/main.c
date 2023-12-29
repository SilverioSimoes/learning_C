#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **pt2; /*ponteiro para ponteiro do tipo inteiro*/
    int *pt1; /*ponteiro para o tipo inteiro*/
    int x = 10;

    printf("x = %d.\n", x);
    printf("pt1 = %d.\n", pt1);
    printf("pt2 = %d.\n\n", pt2);

    pt2 = &pt1;
    pt1 = &x;

    printf("x = %d.\n", x);
    printf("pt1 = %x.\n", pt1);
    printf("pt2 = %x.\n\n", pt2);

    *pt1 = 30;

    printf("x = %d.\n", x);
    printf("pt1 = %x.\n", pt1);
    printf("pt2 = %x.\n\n", pt2);

    **pt2 = 50;

    printf("x = %d.\n", x);
    printf("pt1 = %x.\n", pt1);
    printf("pt2 = %x.\n\n", pt2);

    return 0;
}
