#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_ALUNOS 10
#define MAX_NOTA 100

void bucketSort(int arr[], int n) {
    int maior = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maior) {
            maior = arr[i];
        }
    }

    int num_buckets = 10;
    int buckets[num_buckets][n];
    int bucket_count[num_buckets];

    for (int i = 0; i < num_buckets; i++) {
        bucket_count[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        int index = (arr[i] * num_buckets) / (maior + 1);
        buckets[index][bucket_count[index]++] = arr[i];
    }

    for (int i = 0; i < num_buckets; i++) {
        for (int j = 0; j < bucket_count[i] - 1; j++) {
            for (int k = j + 1; k < bucket_count[i]; k++) {
                if (buckets[i][j] > buckets[i][k]) {
                    int temp = buckets[i][j];
                    buckets[i][j] = buckets[i][k];
                    buckets[i][k] = temp;
                }
            }
        }
    }

    int index = 0;
    for (int i = 0; i < num_buckets; i++) {
        for (int j = 0; j < bucket_count[i]; j++) {
            arr[index++] = buckets[i][j];
        }
    }
}

int interpolationSearch(int arr[], int n, int alvo) {
    int inicio = 0;
    int fim = n - 1;

    while (inicio <= fim && alvo >= arr[inicio] && alvo <= arr[fim]) {
        int pos = inicio + (((double)(fim - inicio) / (arr[fim] - arr[inicio])) * (alvo - arr[inicio]));

        if (arr[pos] == alvo) {
            return pos;
        }
        if (arr[pos] < alvo) {
            inicio = pos + 1;
        } else {
            fim = pos - 1;
        }
    }
    return -1;
}

int main() {
    srand(time(0));
    int notas[NUM_ALUNOS];

    for (int i = 0; i < NUM_ALUNOS; i++) {
        notas[i] = rand() % (MAX_NOTA + 1);
    }

    bucketSort(notas, NUM_ALUNOS);

    printf("Notas ordenadas:\n");
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("%d ", notas[i]);
    }
    printf("\n");

    int alvo;
    printf("Informe a nota que deseja buscar: ");
    scanf("%d", &alvo);

    int resultado = interpolationSearch(notas, NUM_ALUNOS, alvo);
    if (resultado != -1) {
        printf("Nota %d encontrada na posição %d.\n", alvo, resultado);
    } else {
        printf("Nota %d não encontrada.\n", alvo);
    }

    return 0;
}
