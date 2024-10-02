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

    printf("Insira o primeiro valor: ");
    scanf("%f", &v1);

    printf("Insira o segundo valor: ");
    scanf("%f", &v2);

    printf(".......................................................................\n");
    printf("| Soma                                     %-1.2f + %-1.2f = %-1.2f\n", v1, v2, sum(v1, v2));
    printf("| Subtração                                %-1.2f - %-1.2f = %-1.2f\n", v1, v2, sub(v1, v2));
    printf("| Multiplicação                            %-1.2f * %-1.2f = %-1.2f\n", v1, v2, mul(v1, v2));
    printf("| Divisão                                  %-1.2f / %-1.2f = %-1.2f\n", v1, v2, div(v1, v2));
    printf(".......................................................................\n");


}