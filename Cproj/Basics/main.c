#include <stdio.h>
#include <stdlib.h>


int main(){
    int numero;

    printf("Insira um numero: ");
    scanf("%d", &numero);

    if(numero == 0)
    {
        printf("Numero é nulo\n");
    } 
    else if(numero < 0)
    {
        printf("Numero é negativo\n");
    }
    else if (numero % 2 == 0)
    {
        printf("O Numeoro é par\n");
    }
    else {
        printf("O numero é impar\n");
    }
    
    return 0;
}