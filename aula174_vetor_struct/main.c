#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//	Aula 174 - Como criar um vetor de struct?

typedef struct{
	int dia, mes, ano;
}DataNasc;

typedef struct{
	DataNasc dataNasc;
	char nome[100];
	char sexo;
}Pessoa;

Pessoa lerPessoa(){
	Pessoa p;
	char aluno[100];

	printf("\nDigite o nome: ");
	//fgets(&p.nome, 100, stdin);
	scanf("%s", &aluno);
	strcpy(p.nome, aluno);
	printf("Digite a data de nascimento(dd mm aaaa): ");
	scanf("%d%d%d", &p.dataNasc.dia, &p.dataNasc.mes, &p.dataNasc.ano);
	printf("Digite o sexo( M para masculino e F para feminino ): ");
	scanf(" %c", &p.sexo);

	return p;
}

void imprimirPessoa(Pessoa p){
	printf("\n\tNome:\t%s\n", p.nome);
	printf("\tSexo:\t%c\n", p.sexo);
	printf("\tNasc.:\t%d/%d/%d\n\n", p.dataNasc.dia, p.dataNasc.mes, p.dataNasc.ano);
}

int main() {
	int i;
	Pessoa pessoas[3];

	for(i = 0; i < 3; i++)
		pessoas[i] = lerPessoa();

	for(i = 0; i < 3; i++)
		imprimirPessoa(pessoas[i]);

    return 0;
}
