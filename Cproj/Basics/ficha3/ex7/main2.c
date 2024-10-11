#include <stdio.h>

int main() {
    int na, nb, nc;
    int vminino, vmaximo, mid;
    char ord = 'a';

    printf("Insira o primeiro numero: ");
    scanf("%d", &na);

    printf("\nInsira o segundo numero: ");
    scanf("%d", &nb);

    printf("\nInsira o terceiro numero: ");
    scanf("%d", &nc);

    printf("\nQual é a ordenação [a-asc|d-desc]: ");
    scanf(" %c", &ord);

    // Encontrar o valor minimo
    if (na < nb && na < nc) {
        vminino = na;
    } else if (nb < nc) {
        vminino = nb;
    } else {
        vminino = nc;
    }

    // Encontrar o valor maximo
    if (na > nb && na > nc) {
        vmaximo = na;
    } else if (nb > nc) {
        vmaximo = nb;
    } else {
        vmaximo = nc;
    }
    
    // Ex: 20, 10, 2 | 20 + 10 + 2 - 2 - 20 = 10
    // Calcular o valor intermediário
    mid = na + nb + nc - vminino - vmaximo;

    // Exibir os numeros ordenados conforme a ordem solicitada
    if (ord == 'a') {
        printf("\nNumeros ordenados: %d, %d, %d\n", vminino, mid, vmaximo);
    } else {
        printf("\nNumeros ordenados: %d, %d, %d\n", vmaximo, mid, vminino);
    }
    
    return 0;
}
