#define nome "Silvério Paulino Simões"
#define cubo(x) ((x)*(x)*(x))
#include <stdio.h>
#include <string.h>

void main()
{
    printf("%s\n", nome);

    int x = 4;
    printf("O cubo de %d é %d\n", x, cubo(x));

    return 0;
}
