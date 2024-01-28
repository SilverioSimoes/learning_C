#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//	Aula 227 - Imprimir e testar a estrutura de dados dinâmica PILHA (versão 2);

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

typedef struct{
	No *topo;
	int tam;
}Pilha;

void cria_pilha(Pilha *p){
	p->topo = NULL;
	p->tam = 0;
}

Pessoa ler_pessoa(){
	Pessoa p;

	printf("\nDigite o nome: ");
	fgets(&p.nome, 50, stdin);
	printf("Digite a data de nascimento(dd mm aaaa): ");
	scanf("%d%d%d", &p.data.dia, &p.data.mes, &p.data.ano);

	return p;
}

void imprimir_pessoa(Pessoa p){
	printf("\n\tNome:\t%s", p.nome);
	printf("\tNasc.:\t%2d/%2d/%4d\n", p.data.dia, p.data.mes, p.data.ano);
}

//	função para a operação push(empilhar)
void push(Pilha *p){
	No *novo = malloc(sizeof(No));

	if(novo){
		novo->p = ler_pessoa();
		novo->proximo = p->topo;
		p->topo = novo;
		p->tam++;
	}else
		printf("\nErro ao alocar memória...\n");
}

No* pop(Pilha *p){
	if(p->topo){
		No *remover = p->topo;
		p->topo = remover->proximo;
		p->tam--;
		return remover;
	}else
		printf("\nPilha vazia!\n");
	return NULL;
}

void imprimir_pilha(Pilha *p){
	No *aux = p->topo;
	printf("\n--------------------- PILHA Tam.: %d --------------------\n", p->tam);
	while(aux){
		imprimir_pessoa(aux->p);
		aux = aux->proximo;
	}
	printf("\n----------------------- FIM PILHA ----------------------\n");
}

int main() {

	No *remover;
	Pilha p;
	int opcao;

	cria_pilha(&p);

	do{
		printf("\n0 - Sair\n1 - Empilhar\n2 - Desempilhar\n3 - Imprimir\n");
		printf("\nDigite uma das opções acima: ");
		scanf("%d", &opcao);
		getchar();

		switch(opcao){
		case 1:
			push(&p);
			break;
		case 2:
			remover = pop(&p);
			if(remover){
				printf("\nElemento removido com sucesso!\n");
				imprimir_pessoa(remover->p);

				free(remover);
			}else
				printf("\nSem nó a remover.\n");
			break;
		case 3:
			imprimir_pilha(&p);
			break;
		default:
			if(opcao != 0)
				printf("\nOpção inválida!!!\n");
		}
	}while(opcao != 0);

    return 0;
}
