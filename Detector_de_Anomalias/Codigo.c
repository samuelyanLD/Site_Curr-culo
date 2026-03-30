#include <stdio.h>
#include <stdlib.h>

int main( ) {
    FILE *arquivo;

    arquivo = fopen("sensores.csv", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }

    int tempo, temperatura;
    int soma = 0;
    int contador = 0;

    fscanf(arquivo, "%*[^\n]\n");

    // primeira passada: calcular media
    while (fscanf(arquivo, "%d,%d", &tempo, &temperatura) != EOF) {
        soma += temperatura;
        contador++;
    }

    float media = (float)soma / contador;

    printf("Media de temperatura: %.2f\n\n", media);

    rewind(arquivo);

    fscanf(arquivo, "%*[^\n]\n");

    // segunda passada: detectar anomalias
    printf("=== ANALISE DE ANOMALIAS ===\n");

    while (fscanf(arquivo, "%d,%d", &tempo, &temperatura) != EOF) {

        printf("Tempo %d: %d graus\n", tempo, temperatura);

        if (temperatura > media * 1.5) {
            printf(">>> ANOMALIA DETECTADA!\n");
        }
        
        if (temperatura < media * 0.5) {
            printf(">>> ANOMALIA BAIXA DETECTADA!\n");
        }

        printf("\n");
    }
    
    fclose(arquivo);
    
    system("pause");
    
    return 0;
}