#include <stdio.h>
#include "Contabancaria.h"

void Inicializa(ContaBancaria *conta) {
    printf("Nome:");
    scanf("%s", conta->nomeCliente);
    printf("CPF:");
    scanf("%s", conta->CPF);
    printf("Numero da conta:");
    scanf("%d", &conta->numero);
    printf("Tipo da conta (corrente ou poupanca):");
    scanf("%s", conta->tipoDaConta);
    printf("Ano  de abertura:");
    scanf("%d", &conta->anoDeAbertura);
}

void Deposito(ContaBancaria *conta) {
    double valor;
    printf("Qual o valor do deposito?");
    scanf("%lf", &valor);

    conta->saldo += valor;
}

void Saque(ContaBancaria *conta) {
    double valor;
    printf("Qual o valor do saque?");
    scanf("%lf", &valor);

    conta->saldo -= valor;
}

//int transacao(void) {
//    ContaBancaria conta;
//
//    int trade;
//    printf("Gostaria de efetuar alguma transacao na sua conta (Deposito-1 | Saque-2)?");
//    scanf("%d", &trade);
//
//    if(trade == 1) {
//        Deposito(&conta);
//    } else if(trade == 2){
//        Saque(&conta);
//    } else if(trade == 0){
//        return 0;
//    }
//}

void Credito(ContaBancaria *conta) {
    int ano = 2022 - conta->anoDeAbertura;

    if(ano >= 5) {
        printf("\nPossui credito\n");
    } else {
        printf("\nAguerde completar 5 anos para possuir creditos\n");
    }
}

void Imprime(ContaBancaria *conta) {
    printf("\nNome da conta bancaria: %s\n", conta->nomeCliente);
    printf("CPF da conta bancaria: %s\n", conta->CPF);
    printf("Numero da conta bancaria: %d\n", conta->numero);
    printf("Tipo da conta bancaria: %s\n", conta->tipoDaConta);
    printf("Ano de abertura na conta: %d\n", conta->anoDeAbertura);
    printf("\nSALDO: %.2lf\n", conta->saldo);
}
