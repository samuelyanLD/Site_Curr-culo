//Faça um programa em C para calcular a média de três números informados pelo usuário;

#include <stdio.h>
#include <stdlib.h>

int main() {

  void pausar() {
    printf("\nPressione Enter para continuar...");
    getchar();
    getchar();
}

  float n1,n2,n3,conta;
  
  printf("Digite os 3 valores com espaco e pressione enter \n");
  printf ("Digite os valores: ");
  scanf ("%f %f %f",&n1,&n2,&n3);
  
  conta = (n1+n2+n3)/3 ;

  printf ("O resultado é : %.2f \n",conta);

  system("pause");
  return 0;  
}
