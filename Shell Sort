#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void ordenarShell(int arr[], int n) {
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

void ordenarKnuth(int arr[], int n) {
    int gap = 1;
    while (gap < n / 3) {
        gap = 3 * gap + 1;
    }
    while (gap >= 1) {
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
        gap /= 3;
    }
}

void ordenarHibbard(int arr[], int n) {
    int gap = 1;
    while (gap <= n / 3) {
        gap = 2 * gap + 1;
    }
    while (gap >= 1) {
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
        gap = (gap - 1) / 2;
    }
}

void imprimirArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void medirTempo(void (*funcaoOrdenacao)(int[], int), int arr[], int n) {
    clock_t inicio = clock();
    funcaoOrdenacao(arr, n);
    clock_t fim = clock();
    double tempoExecucao = ((double)(fim - inicio)) / CLOCKS_PER_SEC * 1000;
    printf("Tempo de execução: %.6f milissegundos\n", tempoExecucao);
}

int main() {
    int n = 10000;
    int arr1[n], arr2[n], arr3[n];

    for (int i = 0; i < n; i++) {
        arr1[i] = rand() % 10000;
        arr2[i] = arr1[i];
        arr3[i] = arr1[i];
    }

    printf("Testando o Shell Sort com sequência de Shell:\n");
    medirTempo(ordenarShell, arr1, n);

    printf("\nTestando o Shell Sort com sequência de Knuth:\n");
    medirTempo(ordenarKnuth, arr2, n);

    printf("\nTestando o Shell Sort com sequência de Hibbard:\n");
    medirTempo(ordenarHibbard, arr3, n);

    return 0;
}
