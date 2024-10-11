#include <stdio.h>

void checkTriangle(int a, int b, int c) {
    if (a + b > c && a + c > b && b + c > a) {
        printf("Os valores podem formar um triângulo.\n");
        if (a == b && b == c) {
            printf("Tipo de triângulo: Equilátero\n");
        } else if (a == b || b == c || a == c) {
            printf("Tipo de triângulo: Isósceles\n");
        } else {
            printf("Tipo de triângulo: Escaleno\n");
        }
    } else {
        printf("Os valores não podem formar um triângulo.\n");
    }
}

int main() {
    int a, b, c;
    printf("Digite o comprimento da primeira linha: ");
    scanf("%d", &a);
    printf("Digite o comprimento da segunda linha: ");
    scanf("%d", &b);
    printf("Digite o comprimento da terceira linha: ");
    scanf("%d", &c);

    checkTriangle(a, b, c);

    return 0;
}