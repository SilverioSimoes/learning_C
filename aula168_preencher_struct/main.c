#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//	Aula 168 - Como preencher uma struct com dados lidos no teclado

typedef struct {
	char nome[100];
	int idade;
	char sexo;
} Pessoa;

int main() {
	Pessoa pessoa;

	printf("Digite o nome: ");
	fgets(&pessoa.nome, 100, stdin);
	printf("Digite sua idade: ");
	scanf("%d", &pessoa.idade);
//	scanf("%c");
	printf("Digite o sexo(M para masculino e F para feminino): ");
	scanf(" %c", &pessoa.sexo);

	printf("\n\nNome:\t%s\nIdade:\t%d\nSexo:\t%c", pessoa.nome, pessoa.idade, pessoa.sexo);

    return 0;
}
