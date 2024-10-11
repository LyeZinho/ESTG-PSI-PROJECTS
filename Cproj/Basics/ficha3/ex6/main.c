#include <stdio.h>

int main(){
    int range;
    int val = 0;

    printf("Insira um numero: ");
    scanf("%d", &range);

    for(int i = 0; i <= range; i++){
        printf("Resultado: %d\n", val += i);
    }
}

/*
val += i;
val = val + i;
*/