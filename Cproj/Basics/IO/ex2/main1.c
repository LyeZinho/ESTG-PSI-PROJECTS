#include <stdio.h>
#include <stdlib.h>

//Calcular o dobro de um valor inteiro introduzido pelo utilizador.

int Double(int value){
    return value * 2;
}


int main(){
    int valor = 0;

    printf("Insira um valor: ");
    scanf("%d", &valor);

    printf("O dobro de %d é %d", valor, Double(valor));
    system("PAUSE");
}