#include <stdio.h>
#define nome "Fulano de Tal"
#define cubo(x) ((x)*(x)*(x))
#define mkstr(s) # s
#define concat(a,b) a ## b

int main()
{
    printf("%s\n\n", nome);

    // cubo(x)
    int x = 4;
    printf("O cubo de %d é %d.\n\n", x, cubo(x));

    // mkstr(s)
    printf(mkstr(Análise e Desenvolvimento de Sistemas.\n\n));

    // concat(a,b)
//    printf(concat("Análise e Desenvolvimento"," de Sistemas"));

    return 0;
}
