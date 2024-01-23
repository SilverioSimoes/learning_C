#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//	Aula 167 - Como criar novos tipos de dados em C com typedef struct

typedef struct {
	char nome[100];
	int idade;
	char sexo;
} Pessoa;

struct Pessoa2{
	char nome[100];
	int idade;
	char sexo;
}pessoa2;

int main() {
	Pessoa pessoa1;
	struct Pessoa2 pessoa2;

	char aluno[100] = {};

	strcpy(pessoa1.nome, "João da Silva");
	pessoa1.idade = 35;
	pessoa1.sexo = 'M';

	printf("\n\nNome:\t%s\nIdade:\t%d\nSexo:\t%c", pessoa1.nome, pessoa1.idade, pessoa1.sexo);

    return 0;
}
