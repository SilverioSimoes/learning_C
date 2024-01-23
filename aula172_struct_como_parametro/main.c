#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//	Aula 172 - Como passar uma struct como parâmetro para um procedimento?

typedef struct{
	int dia, mes, ano;
}DataNasc;

typedef struct{
	DataNasc dataNasc;
	char nome[100];
	char sexo;
}Pessoa;

void imprimirPessoa(Pessoa p){
	printf("\tNome:\t%s", p.nome);
	printf("\tSexo:\t%c\n", p.sexo);
	printf("\tNasc.:\t%d/%d/%d\n", p.dataNasc.dia, p.dataNasc.mes, p.dataNasc.ano);
}

int main() {
	Pessoa pessoa;

	printf("Digite o nome: ");
	fgets(&pessoa.nome, 100, stdin);
	printf("Digite o sexo(M para masculino e F para feminino): ");
	scanf(" %c", &pessoa.sexo);
	printf("Digite a data de nascimento(dd mm aaaa): ");
	scanf("%d%d%d", &pessoa.dataNasc.dia, &pessoa.dataNasc.mes, &pessoa.dataNasc.ano);

	imprimirPessoa(pessoa);

    return 0;
}
