#ifndef TESTEDOSLIDE_CONTABANCARIA_H
#define TESTEDOSLIDE_CONTABANCARIA_H

typedef struct ContaBancaria{
    char nomeCliente[30];
    char CPF[30];
    char tipoDaConta[30];
    int anoDeAbertura;
    int numero;
    double saldo;
} ContaBancaria;

void Inicializa(ContaBancaria *conta);
void Deposito(ContaBancaria *conta);
void Saque(ContaBancaria *conta);
//int transacao(void);
void Credito(ContaBancaria *conta);
void Imprime(ContaBancaria *conta);

#endif //TESTEDOSLIDE_CONTABANCARIA_H
