#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int buscaBinaria(int arr[], int tamanho, int chave) {
    int inicio = 0, fim = tamanho - 1;
    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        if (arr[meio] == chave)
            return meio;
        if (arr[meio] < chave)
            inicio = meio + 1;
        else
            fim = meio - 1;
    }
    return -1;
}

int buscaInterpolacao(int arr[], int tamanho, int chave) {
    int inicio = 0, fim = tamanho - 1;
    while (inicio <= fim && chave >= arr[inicio] && chave <= arr[fim]) {
        int pos = inicio + (((double)(fim - inicio) / (arr[fim] - arr[inicio])) * (chave - arr[inicio]));
        if (arr[pos] == chave)
            return pos;
        if (arr[pos] < chave)
            inicio = pos + 1;
        else
            fim = pos - 1;
    }
    return -1;
}

int buscaExponencial(int arr[], int tamanho, int chave) {
    if (arr[0] == chave)
        return 0;
    int i = 1;
    while (i < tamanho && arr[i] <= chave)
        i = i * 2;
    return buscaBinaria(arr, i < tamanho ? i : tamanho, chave);
}

void merge(int arr[], int inicio, int meio, int fim) {
    int n1 = meio - inicio + 1;
    int n2 = fim - meio;
    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[inicio + i];
    for (int i = 0; i < n2; i++)
        R[i] = arr[meio + 1 + i];

    int i = 0, j = 0, k = inicio;
    while (i < n1 && j < n2) {
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

void mergeSort(int arr[], int inicio, int fim) {
    if (inicio < fim) {
        int meio = inicio + (fim - inicio) / 2;
        mergeSort(arr, inicio, meio);
        mergeSort(arr, meio + 1, fim);
        merge(arr, inicio, meio, fim);
    }
}

void selectionSort(int arr[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        int menor = i;
        for (int j = i + 1; j < tamanho; j++) {
            if (arr[j] < arr[menor])
                menor = j;
        }
        if (menor != i) {
            int temp = arr[i];
            arr[i] = arr[menor];
            arr[menor] = temp;
        }
    }
}

int particiona(int arr[], int inicio, int fim) {
    int pivot = arr[fim];
    int i = (inicio - 1);
    for (int j = inicio; j <= fim - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[fim];
    arr[fim] = temp;
    return (i + 1);
}

void quickSort(int arr[], int inicio, int fim) {
    if (inicio < fim) {
        int pi = particiona(arr, inicio, fim);
        quickSort(arr, inicio, pi - 1);
        quickSort(arr, pi + 1, fim);
    }
}

void imprimirArray(int arr[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int escolha, chave, tamanho;

    printf("Informe o tamanho da lista: ");
    scanf("%d", &tamanho);

    int arr[tamanho];

    printf("Informe os valores da lista:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nEscolha um método de organização (ordenação):\n");
    printf("1. Ordenação (Merge Sort)\n");
    printf("2. Ordenação (Selection Sort)\n");
    printf("3. Ordenação (Quick Sort)\n");
    scanf("%d", &escolha);

    clock_t inicio, fim;
    double tempo;

    switch (escolha) {
        case 1:
            inicio = clock();
            mergeSort(arr, 0, tamanho - 1);
            fim = clock();
            tempo = ((double) (fim - inicio)) / CLOCKS_PER_SEC;
            printf("Array ordenado por Merge Sort:\n");
            imprimirArray(arr, tamanho);
            printf("Tempo de execução: %f segundos\n", tempo);
            break;
        case 2:
            inicio = clock();
            selectionSort(arr, tamanho);
            fim = clock();
            tempo = ((double) (fim - inicio)) / CLOCKS_PER_SEC;
            printf("Array ordenado por Selection Sort:\n");
            imprimirArray(arr, tamanho);
            printf("Tempo de execução: %f segundos\n", tempo);
            break;
        case 3:
            inicio = clock();
            quickSort(arr, 0, tamanho - 1);
            fim = clock();
            tempo = ((double) (fim - inicio)) / CLOCKS_PER_SEC;
            printf("Array ordenado por Quick Sort:\n");
            imprimirArray(arr, tamanho);
            printf("Tempo de execução: %f segundos\n", tempo);
            break;
        default:
            printf("Opção inválida!\n");
            return 0;
    }

    printf("\nEscolha um algoritmo de busca:\n");
    printf("1. Busca Binária\n");
    printf("2. Busca Interpolacional\n");
    printf("3. Busca Exponencial\n");
    scanf("%d", &escolha);

    printf("Informe o valor a ser buscado: ");
    scanf("%d", &chave);

    switch (escolha) {
        case 1:
            inicio = clock();
            int posBinaria = buscaBinaria(arr, tamanho, chave);
            fim = clock();
            tempo = ((double) (fim - inicio)) / CLOCKS_PER_SEC;
            if (posBinaria != -1)
                printf("Elemento encontrado na posição %d\n", posBinaria);
            else
                printf("Elemento não encontrado.\n");
            printf("Tempo de execução: %f segundos\n", tempo);
            break;
        case 2:
            inicio = clock();
            int posInterpolacao = buscaInterpolacao(arr, tamanho, chave);
            fim = clock();
            tempo = ((double) (fim - inicio)) / CLOCKS_PER_SEC;
            if (posInterpolacao != -1)
                printf("Elemento encontrado na posição %d\n", posInterpolacao);
            else
                printf("Elemento não encontrado.\n");
            printf("Tempo de execução: %f segundos\n", tempo);
            break;
        case 3:
            inicio = clock();
            int posExponencial = buscaExponencial(arr, tamanho, chave);
            fim = clock();
            tempo = ((double) (fim - inicio)) / CLOCKS_PER_SEC;
            if (posExponencial != -1)
                printf("Elemento encontrado na posição %d\n", posExponencial);
            else
                printf("Elemento não encontrado.\n");
            printf("Tempo de execução: %f segundos\n", tempo);
            break;
        default:
            printf("Opção inválida!\n");
            return 0;
    }

    return 0;
}
