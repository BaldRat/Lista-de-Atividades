#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 10

void insertionSort(float *array, int tamanho) {
    for (int i = 1; i < tamanho; i++) {
        float chave = array[i];
        int j = i - 1;

        while (j >= 0 && array[j] > chave) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = chave;
    }
}

void bucketSort(float array[], int tamanho) {
    int num_buckets = tamanho;
    float **buckets = (float **)malloc(num_buckets * sizeof(float *));
    int *tamanhos = (int *)calloc(num_buckets, sizeof(int));

    for (int i = 0; i < num_buckets; i++) {
        buckets[i] = (float *)malloc(tamanho * sizeof(float));
    }

    for (int i = 0; i < tamanho; i++) {
        int bucket_index = array[i] * num_buckets;
        buckets[bucket_index][tamanhos[bucket_index]++] = array[i];
    }

    for (int i = 0; i < num_buckets; i++) {
        if (tamanhos[i] > 0) {
            insertionSort(buckets[i], tamanhos[i]);
        }
    }

    int indice = 0;
    for (int i = 0; i < num_buckets; i++) {
        for (int j = 0; j < tamanhos[i]; j++) {
            array[indice++] = buckets[i][j];
        }
        free(buckets[i]);
    }

    free(buckets);
    free(tamanhos);
}

int main() {
    float array[TAMANHO] = {0.78, 0.17, 0.39, 0.26, 0.72, 0.94, 0.21, 0.12, 0.23, 0.68};

    printf("Array original:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%.2f ", array[i]);
    }
    printf("\n");

    bucketSort(array, TAMANHO);

    printf("Array ordenado:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%.2f ", array[i]);
    }
    printf("\n");

return 0;
}
