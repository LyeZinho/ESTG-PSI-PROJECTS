#include <stdio.h>

float sum(float v1, float v2){
    return v1 + v2;
}

float sub(float v1, float v2){
    return v1 - v2;
}

float mul(float v1, float v2){
    return v1 * v2;
}

float div(float v1, float v2){
    return v1 / v2;
}

int main(){
    float v1 = 0.0;
    float v2 = 0.0;
    char operation = '0';

    printf("Qual será a operação efetuada [s-soma|b-subtração|m-multiplicação|d-divisão]: ");
    scanf("%c", &operation);

    printf("\nPrimeiro valor: ");
    scanf("%f", &v1);

    printf("\nSegundo valor: ");
    scanf("%f", &v2);

    switch (operation)
    {
    case 's':
        printf("\n%-1.2f + %-1.2f = %-1.2f\n", v1, v2, sum(v1,v2));
        break;
    
    case 'b':
        printf("\n%-1.2f - %-1.2f = %-1.2f\n", v1, v2, sub(v1,v2));
        break;

    case 'm':
        printf("\n%-1.2f * %-1.2f = %-1.2f\n", v1, v2, mul(v1,v2));
        break;

    case 'd':
        printf("\n%-1.2f / %-1.2f = %-1.2f\n", v1, v2, div(v1,v2));
        break;

    default:
        printf("\nNenhuma operação foi definida!");
        break;
    }
}