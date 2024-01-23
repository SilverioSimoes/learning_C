#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//	Aula 173 - Como criar uma função que retorna uma struct?

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
	printf("Digite o nome: ");
	fgets(&p.nome, 100, stdin);
	printf("Digite o sexo(M para masculino e F para feminino): ");
	scanf(" %c", &p.sexo);
	printf("Digite a data de nascimento(dd mm aaaa): ");
	scanf("%d%d%d", &p.dataNasc.dia, &p.dataNasc.mes, &p.dataNasc.ano);
	return p;
}

void imprimirPessoa(Pessoa p){
	printf("\tNome:\t%s", p.nome);
	printf("\tSexo:\t%c\n", p.sexo);
	printf("\tNasc.:\t%d/%d/%d\n", p.dataNasc.dia, p.dataNasc.mes, p.dataNasc.ano);
}

int main() {
	Pessoa pessoa;

	pessoa = lerPessoa();
	imprimirPessoa(pessoa);

    return 0;
}
