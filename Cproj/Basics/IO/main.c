#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int a, b;
    printf("Enter two integers \n ");
    printf("Integer 1:");
    scanf("%d", &a);
    system("cls");
    printf("Integer 2:");
    scanf("%d", &b);
    system("cls");

    printf("%d, %d \n\n", a, b);

    system("pause");
    return 0;
}