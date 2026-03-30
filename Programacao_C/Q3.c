/*. Faça um programa que leia as seguintes informações:
• Altura e Largura de uma parede;
• Altura e Largura de azulejos;
• Calcule e informe a quantidade de azulejos necessários para cobrir a parede. */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {
    
    void pausar() {
    printf("\nPressione Enter para continuar...");
    getchar();
    getchar();
}


    float alt_1,larg_1,alt_2,larg_2,conta_1,conta_2,resultado,conta_3;
    
    printf("Digite a Altura e a Largura de sua parede: ");
    scanf("%f %f",&alt_1,&larg_1);
    printf("Agora digite a Altura e Largura dos azulejos: ");
    scanf("%f %f",&alt_2,&larg_2);
    
    conta_1 = alt_1 * larg_1;
    conta_2 = alt_2 * larg_2;
    resultado = ceil(conta_1/conta_2);
    
    if (conta_2>conta_1){
        conta_3 = conta_2 - conta_1;
        printf ("Irao sobrar %.0f azulejos.\n");
    }
    
    printf("Sua parede possui %.0f metros de area e seus azulejos %.0f \nlogo %.0f azulejos sao necessarios para preenche-la.\n",conta_1,conta_2,resultado);
    
    system("pause");
    return 0;
}