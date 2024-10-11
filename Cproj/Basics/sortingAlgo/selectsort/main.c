#include <stdio.h>

void sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int cursor = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[cursor]) {
                cursor = j;
            }
        }

        if (cursor != i) {
            int temp = arr[i];
            arr[i] = arr[cursor];
            arr[cursor] = temp;
        }
    }
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {1, 10, 9, 2, 4, 6, 5, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

     printf("Array inicial ");
     printArr(arr, n);

     sort(arr, n);

     printf("Array ordenado ");
     printArr(arr, n);
}