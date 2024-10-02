#include <stdio.h>
#include <stdlib.h>

void commpare(int n1, int n2){    
    if(n1 > n2)
    {
        printf("\n%d é maior que %d\n", n1, n2);
    } 
    else if(n1 < n2)
    {
        printf("\n%d é menor que %d\n", n2, n1);
    }
    else if(n1 == n2)
    {
        printf("\n%d é igual %d\n", n2, n1);
    }
    else
    {
        printf("\nInvalido\n");
    }
}

int main(){
    int n1, n2;

    printf("\nInsiera o primeiro numero: ");
    scanf("%d", &n1);

    printf("\nInsiera o segundo numero: ");
    scanf("%d", &n2);

    commpare(n1, n2);

    // system("PAUSE");
}