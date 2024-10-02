/*
Escreva um programa que solicite um número real ao utilizador e o escreva da seguinte forma no
ecrã: (Exemplo com o número 1345.6789)

1345.679 alinhado à esquerda
+1345.679 alinhado à esquerda com sinal
1345.679 alinhado à direita
00000001345.679 alinhado à direita antecedidos de zeros
*/


#include <stdio.h>

int main() {
    float val = 0.0;

    printf("Insira um valor real: ");
    scanf("%f", &val);
    printf("%-10.3f\n", val);
    printf("%+-10.3f\n", val);
    printf("%10.3f\n", val);
    printf("%010.3f\n", val);

    return 0;
}