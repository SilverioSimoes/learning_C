#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int num[10];

    for(i = 0; i < 10; i++){
        printf("Digite o valor do vetor: ");
        scanf("%d", &num[i]);
    }

    for(i = 0; i < 10; i++){
        printf("num[%d]: %d\n", i, num[i]);
    }

    return 0;
}
