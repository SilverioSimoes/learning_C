#include <stdio.h>
#include <stdlib.h>

/*

Modelo de estrutura:

    <nome_da_variavel>:registro
    Inicio
        <nome_campo_1>:<tipo_campo_1>
        <nome_campo_2>:<tipo_campo_2>
        ...
        <nome_campo_n>:<tipo_campo_n>
    Fimregistro
________________________________________________

Modelo de declaração de variáveis:

    var Ficha_Funcionario: registro
    inicio
        matricula: inteiro
        nome: vetor[1..50] de caractere
        Dt_Nascimento: vetor[1..9] de caractere
        Cargo: vetor[1..30] de caractere
        Salario: real
    fim

*/

typedef struct tipo_endereco {
    char rua [50];
    int numero;
    char bairro [20];
    char cidade [30];
    char sigla_estado [3];
    long int CEP;
} tp_endereco;

struct tipo_cadastro {
    char nome [50];
    long int telefone;
    tp_endereco endereco;
};

typedef struct tipo_cadastro cadastro;

int main(){
    cadastro ALUNOS;
//    ALUNOS = {"João dos Santos", 21988777654, {"Av. das Américas", 4200,/
  //   "Barra da Tijuca", "Rio de Janeiro" "RJ", 22640102}};



    //printf("%s", ALUNOS);

    return 0;

}




