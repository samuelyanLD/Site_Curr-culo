#include <stdio.h>
#include <stdlib.h>

int main () {

    FILE *arquivo;
    arquivo = fopen ("dados.csv","r");

    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo!\n");
        return 1;
    }

    int dia, melhor_dia, pior_dia,toneladas;
    int soma = 0;
    int contador = 0;
    int maior = -1;
    int menor = 999999;
    int anterior = -1;

    printf("############################\nEste programa le um dataset \n");


//pra pular o cabecalho do dataset || o * serve pra nao salvar alguma variavel e o \n pra deletar o enter
    fscanf(arquivo, "%*[^\n]\n");

    while (fscanf(arquivo, "%d,%d", &dia, &toneladas) != EOF) {

    printf("Dia %d: %d toneladas\n", dia, toneladas);

    soma = soma + toneladas;
    contador++;

    if (anterior != -1 && toneladas < anterior) {
        printf("Queda de producao detectada!\n");
    }

    anterior = toneladas;

    if (toneladas > maior) {
        maior = toneladas;
        melhor_dia = dia;
    }


    if (toneladas < menor) {
        menor = toneladas;
        pior_dia = dia;
    }
}

    float media = (float)soma / contador;

    printf("\n===== ANALISE =====\n");
    printf("Media: %.2f toneladas\n", media);
    printf("Melhor dia: %d (%d toneladas)\n", melhor_dia, maior);
    printf("Pior dia: %d (%d toneladas)", pior_dia, menor);
    printf("\n");
    fclose(arquivo);

    system("pause");

    return 0;
}