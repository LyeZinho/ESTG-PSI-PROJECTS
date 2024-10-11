#include <stdio.h>

int main() {
    float valorCompras, valorDesconto, valorFinal;
    float percentagemDesconto;

    // Solicitar o valor das compras ao usuário
    printf("Digite o valor das compras: ");
    scanf("%f", &valorCompras);

    // Determinar a percentagem de desconto com base no valor das compras
    if (valorCompras <= 500) {
        percentagemDesconto = 0.0;
    } else if (valorCompras <= 1250) {
        percentagemDesconto = 4.0;
    } else if (valorCompras <= 2000) {
        percentagemDesconto = 6.0;
    } else {
        percentagemDesconto = 8.0;
    }

    // Calcular o valor do desconto e o valor final a pagar
    valorDesconto = (percentagemDesconto / 100) * valorCompras;
    valorFinal = valorCompras - valorDesconto;

    // Apresentar os resultados
    printf("Percentagem de desconto aplicada: %.2f%%\n", percentagemDesconto);
    printf("Valor do desconto: %.2f€\n", valorDesconto);
    printf("Valor final a pagar: %.2f€\n", valorFinal);

    return 0;
}