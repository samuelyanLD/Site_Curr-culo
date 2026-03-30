/*
Crie um algoritmo que leia as seguintes informações sobre uma pessoa:
a. O sexo da pessoa;
b. Se a pessoal tem problema de saúde.
Apresente como resultado se a pessoa pode se alistar (considere que apenas homens podem se
alistar).
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

        char sexo [10],saude [10];

        while (1) { 
            printf("\n######################\n");
            printf("Qual seu sexo? [masculino/feminino] ");
            scanf (" %9s",sexo);
            printf("\nPossui algum problema de sáude debilitante? [sim/nao] ");
            scanf (" %10s",saude);

                if ( 
                    (strcmp(sexo,"masculino") !=0 && strcmp(sexo,"feminino") !=0 ) ||
                    (strcmp(saude,"nao") !=0 && strcmp(saude,"sim") !=0 )
                   )
                          
                {   printf("Entrada invalida, por favor digite novamente.\n");
                continue;
                }
            
                if (
                    (strcmp(sexo,"masculino") ==0 && strcmp(saude,"nao") == 0))
                {
                    printf("\nVoce pode se alistar! \n");
                } else {
                    printf("\nVoce nao pode se alistar. \n");
                }



        break;
    }

    system("pause");
    return 0;
}
