#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int particao_primeiro(int arr[], int inicio, int fim) {
    int pivo = arr[inicio];
    int i = inicio + 1, j = fim;

    while (i <= j) {
        while (i <= fim && arr[i] <= pivo) i++;
        while (arr[j] > pivo) j--;
        if (i < j) trocar(&arr[i], &arr[j]);
    }
    trocar(&arr[inicio], &arr[j]);
    return j;
}

int particao_ultimo(int arr[], int inicio, int fim) {
    trocar(&arr[inicio], &arr[fim]);
    return particao_primeiro(arr, inicio, fim);
}

int particao_meio(int arr[], int inicio, int fim) {
    int meio = inicio + (fim - inicio) / 2;
    trocar(&arr[inicio], &arr[meio]);
    return particao_primeiro(arr, inicio, fim);
}

void quick_sort(int arr[], int inicio, int fim, int (*criterio_pivo)(int[], int, int)) {
    if (inicio < fim) {
        int posicao_pivo = criterio_pivo(arr, inicio, fim);
        quick_sort(arr, inicio, posicao_pivo - 1, criterio_pivo);
        quick_sort(arr, posicao_pivo + 1, fim, criterio_pivo);
    }
}

void imprimir_array(int arr[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void medir_tempo(int arr[], int tamanho, int (*criterio_pivo)(int[], int, int), const char *descricao) {
    int *arr_copia = malloc(tamanho * sizeof(int));
    for (int i = 0; i < tamanho; i++) arr_copia[i] = arr[i];

    clock_t inicio = clock();
    quick_sort(arr_copia, 0, tamanho - 1, criterio_pivo);
    clock_t fim = clock();

    double tempo_gasto = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
    printf("Tempo (%s): %.6f segundos\n", descricao, tempo_gasto);

    free(arr_copia);
}

int main() {
    const int tamanho = 10000;
    int arr_quase_ordenado[tamanho];
    int arr_desordenado[tamanho];

    for (int i = 0; i < tamanho; i++) {
        arr_quase_ordenado[i] = i;
        arr_desordenado[i] = rand() % 10000;
    }

    printf("Análise com lista quase ordenada:\n");
    medir_tempo(arr_quase_ordenado, tamanho, particao_primeiro, "Pivô: Primeiro elemento");
    medir_tempo(arr_quase_ordenado, tamanho, particao_ultimo, "Pivô: Último elemento");
    medir_tempo(arr_quase_ordenado, tamanho, particao_meio, "Pivô: Elemento do meio");

    printf("\nAnálise com lista desordenada:\n");
    medir_tempo(arr_desordenado, tamanho, particao_primeiro, "Pivô: Primeiro elemento");
    medir_tempo(arr_desordenado, tamanho, particao_ultimo, "Pivô: Último elemento");
    medir_tempo(arr_desordenado, tamanho, particao_meio, "Pivô: Elemento do meio");

    return 0;
}
