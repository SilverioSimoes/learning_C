#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//	Aula 224 - Operação push(empilhar)

typedef struct{
	int dia, mes, ano;
}Data;

typedef struct{
	Data data;
	char nome[50];
}Pessoa;

typedef struct no{
	Pessoa p;
	struct no *proximo;
	}No;

Pessoa ler_pessoa(){
	Pessoa p;

	printf("\nDigite o nome: ");
	fgets(&p.nome, 50, stdin);
	printf("Digite a data de nascimento(dd mm aaaa): ");
	scanf("%d%d%d", &p.data.dia, &p.data.mes, &p.data.ano);

	return p;
}

void imprimir_pessoa(Pessoa p){
	printf("\n\tNome:\t%s\n", p.nome);
	printf("\tNasc.:\t%2d/%2d/%4d\n", p.data.dia, p.data.mes, p.data.ano);
}

//	função para a operação push(empilhar)
No* push(No *topo){
	No *novo = malloc(sizeof(No));

	if(novo){
		novo->p = ler_pessoa();
		novo->proximo = topo;
		return novo;
	}else
		printf("\nErro ao alocar memória...\n");
	return NULL;
}

int main() {

	No *topo = NULL;
	int opcao;

	do{
		printf("\n0 - Sair\n1 - Empilhar\n2 - Desempilhar\n3 - Imprimir\n");
		scanf("%d", &opcao);
		getchar();

		switch(opcao){
		case 1:
			topo = push(topo);
			break;
		case 2:

			break;
		case 3;

			break;
		default:
			if(opcao != 0)
				printf("\nOpção inválida!!!\n");
		}
	}while(opcao != 0);

    return 0;
}
