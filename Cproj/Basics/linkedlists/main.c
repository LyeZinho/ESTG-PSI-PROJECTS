#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct listnode
{
    struct listnode *px;
    char name[100]; 
};

typedef struct listnode LISTNODE;


int main(){
    /*
    Alocando em memoria para aux um espaço para o ponteiro do tamanho de LISTNODE
    */
    struct listnode *root = NULL;
    struct listnode *n1 = NULL;
    struct listnode *n2 = NULL;
    struct listnode *n3 = NULL;
    
    root = malloc(sizeof(LISTNODE));
    n1 = malloc(sizeof(LISTNODE));
    n2 = malloc(sizeof(LISTNODE));
    n3 = malloc(sizeof(LISTNODE));

    strcpy(root -> name, "Pedro Jesus");
    strcpy(n1 -> name, "Thiago Santos");
    strcpy(n2 -> name, "Henrique Ramos");
    strcpy(n3 -> name, "Guilerme Santos");

    root -> px = n1;
    n1 -> px = n2;
    n2 -> px = n3;
    n3 -> px = NULL;
    // root -> n1 -> n2 -> n3 -> NULL

    printf("Root: %s\n", root -> name);
    printf("N1: %s\n", root -> px -> name);
    printf("N2: %s\n", root -> px -> px -> name);
    printf("N3: %s\n", root -> px -> px -> px -> name);

    system("PAUSE");
}
