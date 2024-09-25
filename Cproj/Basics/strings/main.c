#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char nome[100];
    char email[100];
    int idade;
    char nome_next[100];
    char email_next[100];
    char email_e_nome[201];

    printf("Digite seu nome: ");
    gets(nome);
    printf("\n");

    printf("Digite seu email: ");
    gets(email);
    printf("\n");

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("\n");
    printf("nome: %s | email: %s | idade: %d\n\n\n", nome, email, idade);

    strcpy(nome_next, nome);
    printf("%s\n", nome_next);
    strcpy(email_next, email);
    printf("%s\n", email_next);
    strcat(email_e_nome, nome);
    printf("%s\n", email_e_nome);
    strcat(email_e_nome, "/");
    printf("%s\n", email_e_nome);
    strcat(email_e_nome, email);
    printf("%s\n\n", email_e_nome);


    system("pause");
}