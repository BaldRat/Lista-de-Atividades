#include <stdio.h>
#include <stdlib.h>

int encontraMaior(int arr[], int n) {
    int maior = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maior) {
            maior = arr[i];
        }
    }
    return maior;
}

void countingSort(int arr[], int n, int exp) {
    int *saida = (int *)malloc(n * sizeof(int));
    int contador[10] = {0};

    for (int i = 0; i < n; i++) {
        contador[(arr[i] / exp) % 10]++;
    }

    for (int i = 1; i < 10; i++) {
        contador[i] += contador[i - 1];
    }

    for (int i = n - 1; i >= 0; i--) {
        int digito = (arr[i] / exp) % 10;
        saida[contador[digito] - 1] = arr[i];
        contador[digito]--;
    }

    for (int i = 0; i < n; i++) {
        arr[i] = saida[i];
    }

    free(saida);
}

void radixSort(int arr[], int n) {
    int maior = encontraMaior(arr, n);
    for (int exp = 1; maior / exp > 0; exp *= 10) {
        countingSort(arr, n, exp);
    }
}

void imprimeArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array original:\n");
    imprimeArray(arr, n);

    radixSort(arr, n);

    printf("Array ordenado:\n");
    imprimeArray(arr, n);

    int arr2[] = {12345, 67890, 1, 98765, 43210};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("Array original (números maiores):\n");
    imprimeArray(arr2, n2);

    radixSort(arr2, n2);

    printf("Array ordenado (números maiores):\n");
    imprimeArray(arr2, n2);

    return 0;
}
