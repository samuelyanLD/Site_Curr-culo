/*
Um aluno do Curso de Engenharia da UniFIPMoc deseja ir ao Campus Party 2023.
Crie um algoritmo que leia duas informações:
• 1) o aluno tem dinheiro para a viagem (verdadeiro ou falso) e
• 2) os pais deixam participar do evento (verdadeiro ou falso). Exiba como resposta se o aluno irá
ao FEPEG ou não.    
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {

    void pausar() {
    printf("\nPressione Enter para continuar...");
    getchar();
    getchar();
}
    
    while(1) {
    
    char dinheiro[4],permissao[4];
    
    printf("\n##########################\n");
    printf("Para esse algoritmo responda apenas com 'sim' ou 'nao' \n");
    printf("Possui dinheiro para ir a campus party? ");
    scanf("%3s",dinheiro);
    printf("Possui permissao para ir a Campus Party? ");
    scanf("%3s",permissao);
   
        if (strcmp(dinheiro,"sim") !=0 && strcmp(dinheiro,"nao") != 0 ||
            strcmp(permissao,"sim") !=0 && strcmp (permissao,"nao") !=0) {
                printf("\nEntrada invalida, Por favor Digite Novamente.\n");

                continue;
            }

        if (strcmp(dinheiro,"sim")==0 && strcmp(permissao,"sim")==0){
            printf("\nVoce pode ir a Campus Party! \n");
        } else {
            printf("\nVoce nao pode ir a Campus Party. \n");
    }
    break;
}
    system("pause");        
    return 0;
}
