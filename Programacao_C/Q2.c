//implemente um código que leia o raio (R) de um círculo, calcule a área (A) do mesmo; A = π* R2

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {

    void pausar() {
    printf("\nPressione Enter para continuar...");
    getchar();
    getchar();
}
    
    float raio,conta;
    
    printf ("informe o raio do circulo: ");
    scanf ("%f",&raio);

    conta = 3.1415 * pow (raio,2);
 
    printf("A area desse circulo eh de: %.2f metros \n",conta);
 
    system("pause");
    return 0;   
}