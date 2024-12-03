#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 15

int comparacoes = 0;

void contar_comparacao() {
    comparacoes++;
}

void exibir_lista(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// =========================== Shell Sort ===========================
void shellSort(int arr[], int n) {
    int intervalo, i, j, temp;
    for (intervalo = n / 2; intervalo > 0; intervalo /= 2) {
        for (i = intervalo; i < n; i++) {
            temp = arr[i];
            for (j = i; j >= intervalo && arr[j - intervalo] > temp; j -= intervalo) {
                arr[j] = arr[j - intervalo];
                contar_comparacao();
            }
            arr[j] = temp;
        }
    }
}

// =========================== Merge Sort ===========================
void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];

    for (int i = 0; i < n1; i++) L[i] = arr[l + i];
    for (int j = 0; j < n2; j++) R[j] = arr[m + 1 + j];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        contar_comparacao();
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

// =========================== Selection Sort ===========================
void selectionSort(int arr[], int n) {
    int i, j, minIdx, temp;
    for (i = 0; i < n - 1; i++) {
        minIdx = i;
        for (j = i + 1; j < n; j++) {
            contar_comparacao();
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        temp = arr[minIdx];
        arr[minIdx] = arr[i];
        arr[i] = temp;
    }
}

// =========================== Quick Sort ===========================
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++) {
        contar_comparacao();
        if (arr[j] < pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// =========================== Bucket Sort ===========================
void bucketSort(int arr[], int n) {
    int i, j, k;
    int max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    int bucket[max + 1];
    for (i = 0; i <= max; i++) bucket[i] = 0;

    for (i = 0; i < n; i++) {
        contar_comparacao();
        bucket[arr[i]]++;
    }

    k = 0;
    for (i = 0; i <= max; i++) {
        for (j = 0; j < bucket[i]; j++) {
            arr[k++] = i;
        }
    }
}

// =========================== Radix Sort ===========================
int getMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void countSort(int arr[], int n, int exp) {
    int output[n];
    int count[10] = {0};

    for (int i = 0; i < n; i++) {
        contar_comparacao();
        count[(arr[i] / exp) % 10]++;
    }

    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    for (int i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

void radixSort(int arr[], int n) {
    int max = getMax(arr, n);
    for (int exp = 1; max / exp > 0; exp *= 10) {
        countSort(arr, n, exp);
    }
}

int main() {
    int arr[TAMANHO] = {12, 7, 34, 23, 15, 56, 9, 3, 11, 45, 78, 90, 22, 61, 35};
    int arrCopy[TAMANHO];
    clock_t start, end;

    printf("Shell Sort:\n");
    for (int i = 0; i < TAMANHO; i++) arrCopy[i] = arr[i];
    comparacoes = 0;
    start = clock();
    shellSort(arrCopy, TAMANHO);
    end = clock();
    printf("Tempo: %f segundos\n", (double)(end - start) / CLOCKS_PER_SEC);
    printf("Comparações: %d\n", comparacoes);
    exibir_lista(arrCopy, TAMANHO);

    printf("\nMerge Sort:\n");
    for (int i = 0; i < TAMANHO; i++) arrCopy[i] = arr[i];
    comparacoes = 0;
    start = clock();
    mergeSort(arrCopy, 0, TAMANHO - 1);
    end = clock();
    printf("Tempo: %f segundos\n", (double)(end - start) / CLOCKS_PER_SEC);
    printf("Comparações: %d\n", comparacoes);
    exibir_lista(arrCopy, TAMANHO);

    printf("\nSelection Sort:\n");
    for (int i = 0; i < TAMANHO; i++) arrCopy[i] = arr[i];
    comparacoes = 0;
    start = clock();
    selectionSort(arrCopy, TAMANHO);
    end = clock();
    printf("Tempo: %f segundos\n", (double)(end - start) / CLOCKS_PER_SEC);
    printf("Comparações: %d\n", comparacoes);
    exibir_lista(arrCopy, TAMANHO);

    printf("\nQuick Sort:\n");
    for (int i = 0; i < TAMANHO; i++) arrCopy[i] = arr[i];
    comparacoes = 0;
    start = clock();
    quickSort(arrCopy, 0, TAMANHO - 1);
    end = clock();
    printf("Tempo: %f segundos\n", (double)(end - start) / CLOCKS_PER_SEC);
    printf("Comparações: %d\n", comparacoes);
    exibir_lista(arrCopy, TAMANHO);

    printf("\nBucket Sort:\n");
    for (int i = 0; i < TAMANHO; i++) arrCopy[i] = arr[i];
    comparacoes = 0;
    start = clock();
    bucketSort(arrCopy, TAMANHO);
    end = clock();
    printf("Tempo: %f segundos\n", (double)(end - start) / CLOCKS_PER_SEC);
    printf("Comparações: %d\n", comparacoes);
    exibir_lista(arrCopy, TAMANHO);

    printf("\nRadix Sort:\n");
    for (int i = 0; i < TAMANHO; i++) arrCopy[i] = arr[i];
    comparacoes = 0;
    start = clock();
    radixSort(arrCopy, TAMANHO);
    end = clock();
    printf("Tempo: %f segundos\n", (double)(end - start) / CLOCKS_PER_SEC);
    printf("Comparações: %d\n", comparacoes);
    exibir_lista(arrCopy, TAMANHO);

    return 0;
}
