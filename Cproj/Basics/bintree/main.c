/*
Logica da arvore binária

a direita é maior
a esquerda é menor
se for 0 é o fim
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node
{
    struct Node *Left;
    struct Node *Right;
    int value; // se for 0 -> é o fim
};

/*
truct:
        \
        1
    2       4
        5       6

*/

int main(){
    struct Node root;
    struct Node node1;
    struct Node node2;
    

}