//  Faça um algoritmo que leia um número e diga se este número está no intervalo entre 100 e 200.

#include <stdio.h>
#include <stdlib.h>

int main () {

void pausar() {
    printf("\nPressione Enter para continuar...");
    getchar();
    getchar();
}

int numero1,numero2,variavel;

    printf("\n ####################### \n");
    printf("\nEste programa permite saber se um numero x esta dentro de um determinado intervalo!\n");
    printf("Digite o intervalo [x y]: ");
    if (scanf("%d %d", &numero1, &numero2) != 2) {
        printf("\nIntervalo invalido!\n");
        pausar();
        return 1;
    }
    
    printf("\nAgora digite o numero desejado: ");
    if (scanf("%d", &variavel) != 1) {
        printf("\nValor digitado nao eh uBm numero inteiro!\n");
        pausar();
        return 1;
    }

        if ((variavel >= numero1 && variavel <= numero2) ||
            (variavel >= numero2 && variavel <= numero1)){

            printf("\nSeu numero esta dentro desse intervalo! \n");
        } else {
            printf("\nSeu numero nao esta dentro desse intervalo");
        }

    getchar();
    getchar();
    return 0;
}

// Evandro achei mais divertido fazer assim :)
// fica mais completo