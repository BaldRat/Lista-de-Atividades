#include <stdio.h>

void imprimirArray(int array[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void selectionSort(int array[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        int indiceMinimo = i;

        for (int j = i + 1; j < tamanho; j++) {
            if (array[j] < array[indiceMinimo]) {
                indiceMinimo = j;
            }
        }

        if (indiceMinimo != i) {
            int temp = array[i];
            array[i] = array[indiceMinimo];
            array[indiceMinimo] = temp;
        }

        printf("Iteração %d: ", i + 1);
        imprimirArray(array, tamanho);
    }
}

int main() {
    int arrayPequeno[] = {29, 10, 14, 37, 13};
    int arrayMedio[] = {50, 22, 89, 4, 67, 90, 1, 30, 21, 56, 45};
    int arrayGrande[] = {5, 15, 35, 50, 25, 9, 80, 16, 18, 42, 67, 71, 11, 60, 29, 91, 74, 31, 33, 48, 8, 77, 12, 41, 90};

    int tamanhoPequeno = sizeof(arrayPequeno) / sizeof(arrayPequeno[0]);
    int tamanhoMedio = sizeof(arrayMedio) / sizeof(arrayMedio[0]);
    int tamanhoGrande = sizeof(arrayGrande) / sizeof(arrayGrande[0]);

    printf("Array pequeno inicial: ");
    imprimirArray(arrayPequeno, tamanhoPequeno);
    printf("\nProcesso de ordenação para array pequeno:\n");
    selectionSort(arrayPequeno, tamanhoPequeno);
    printf("\nArray pequeno ordenado: ");
    imprimirArray(arrayPequeno, tamanhoPequeno);
    printf("\n");

    printf("Array médio inicial: ");
    imprimirArray(arrayMedio, tamanhoMedio);
    printf("\nProcesso de ordenação para array médio:\n");
    selectionSort(arrayMedio, tamanhoMedio);
    printf("\nArray médio ordenado: ");
    imprimirArray(arrayMedio, tamanhoMedio);
    printf("\n");

    printf("Array grande inicial: ");
    imprimirArray(arrayGrande, tamanhoGrande);
    printf("\nProcesso de ordenação para array grande:\n");
    selectionSort(arrayGrande, tamanhoGrande);
    printf("\nArray grande ordenado: ");
    imprimirArray(arrayGrande, tamanhoGrande);

    return 0;
}
