/*

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {

    FILE *arquivo;
    arquivo = fopen ("dados.csv", "r");
    
    char linha[100];
    int profundidade, umidade, rocha;
    char risco[10];

    printf("############################\nEste programa le um dataset a fim de analisar a produtividade de uma mineracao.\n");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!");
        return 1;
    }

    fgets(linha, sizeof(linha), arquivo); //pra pular o cabecalho 

    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        if (sscanf(linha, "%d,%d,%d,%s",
           &profundidade,
           &umidade,
           &rocha,
           risco) == 4) {

        printf("Prof: %d | Umidade: %d | Rocha: %d | Risco: %s\n",profundidade, umidade, rocha, risco);
               
        if (profundidade > 100 && umidade > 70) {
            printf("IA: Alto risco\n");
        } else if (profundidade > 80) {
            printf("IA: Medio risco\n");
        } else {
            printf("IA: Baixo risco\n");
        }

        if (strncmp(risco, "alto", 4) == 0) {
            printf("Dataset diz: Alto\n");
        }

        printf("\n");
    }
}

    fclose(arquivo);

    system("pause");

    return 0;
}