#include "Contabancaria.h"
#include "Contabancaria.c"

int main() {
    ContaBancaria *conta;
    int opcao;

    Inicializa(&conta);

    while(1) {
        printf("\n================ OPCAO ================\n");

        printf("Deseja efetuar Deposito(1), Saque(2) ou Sair do servico(0):");
        scanf("%d", &opcao);

        if(opcao == 1) {
            Deposito(&conta);
        } else if(opcao == 2) {
            Saque(&conta);
        } else {
            break;
        }
    }

    Credito(&conta);
    Imprime(&conta);
    return 0;
}
