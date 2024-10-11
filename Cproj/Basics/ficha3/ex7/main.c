#include <stdio.h>

int isgt(int left, int right) {
    if (left > right) return 1;
    else return 0;
}

void ording(char ord, int *arr) {
    int temp;
    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            if ((ord == 'a' && arr[i] > arr[j]) || (ord == 'd' && arr[i] < arr[j])) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int arr[3];
    int input;
    char ord;

    for (int i = 0; i < 3; i++) {
        printf("\nInsira o %d item: ", i + 1);
        scanf("%d", &input);
        arr[i] = input;
    }

    printf("\nQual é a ordenação [a-asc|d-desc]: ");
    scanf(" %c", &ord);  

    ording(ord, arr);

    printf("\nArray ordenado: ");
    for (int i = 0; i < 3; i++) {
        printf("\n%d -> %d\n", i + 1, arr[i]);
    }

    return 0;
}