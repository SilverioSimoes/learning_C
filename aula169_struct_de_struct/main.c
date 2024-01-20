#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//	Aula 169 - Posso ter struct de struct

typedef struct{
	int dia, mes, ano;
}DataNasc;

typedef struct{
	DataNasc dataNasc;
	char nome[100];
	int idade;
	char sexo;
}Pessoa;

int main() {
	Pessoa pessoa;

	printf("Digite o nome: ");
	fgets(&pessoa.nome, 100, stdin);
	printf("Digite sua idade: ");
	scanf("%d", &pessoa.idade);
//	scanf("%c");
	printf("Digite o sexo(M para masculino e F para feminino): ");
	scanf(" %c", &pessoa.sexo);
	printf("Digite a data de nascimento(dd mm aaaa): ");
	scanf("%d%d%d", &pessoa.dataNasc.dia, &pessoa.dataNasc.mes, &pessoa.dataNasc.ano);

	printf("\n\nNome:\t%s\nIdade:\t%d\nSexo:\t%c\n", pessoa.nome, pessoa.idade, pessoa.sexo);
	printf("Data de nasc.:\t%d/%d/%d\n", pessoa.dataNasc.dia, pessoa.dataNasc.mes, pessoa.dataNasc.ano);

    return 0;
}
