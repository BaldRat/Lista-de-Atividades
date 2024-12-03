#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define MAX 100
#define TAM 50

void merge(char arr[][TAM], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    char L[n1][TAM], R[n2][TAM];
    for (int i = 0; i < n1; i++)
        strcpy(L[i], arr[l + i]);
    for (int i = 0; i < n2; i++)
        strcpy(R[i], arr[m + 1 + i]);
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (strcasecmp(L[i], R[j]) <= 0)
            strcpy(arr[k++], L[i++]);
        else
            strcpy(arr[k++], R[j++]);
    }
    while (i < n1)
        strcpy(arr[k++], L[i++]);
    while (j < n2)
        strcpy(arr[k++], R[j++]);
}

void mergeSort(char arr[][TAM], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int partition(char arr[][TAM], int low, int high) {
    char pivot[TAM];
    strcpy(pivot, arr[high]);
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (strcasecmp(arr[j], pivot) < 0) {
            i++;
            char temp[TAM];
            strcpy(temp, arr[i]);
            strcpy(arr[i], arr[j]);
            strcpy(arr[j], temp);
        }
    }
    char temp[TAM];
    strcpy(temp, arr[i + 1]);
    strcpy(arr[i + 1], arr[high]);
    strcpy(arr[high], temp);
    return i + 1;
}

void quickSort(char arr[][TAM], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

bool binarySearch(char arr[][TAM], int size, char *word) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        int cmp = strcasecmp(arr[mid], word);
        if (cmp == 0)
            return true;
        if (cmp < 0)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return false;
}

int main() {
    char palavras[MAX][TAM];
    int n;
    char busca[TAM];
    printf("Quantas palavras deseja inserir? ");
    scanf("%d", &n);
    printf("Digite %d palavras:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%s", palavras[i]);
    }
    printf("\nEscolha o método de ordenação:\n1. Merge Sort\n2. Quick Sort\n");
    int opcao;
    scanf("%d", &opcao);
    if (opcao == 1) {
        mergeSort(palavras, 0, n - 1);
    } else if (opcao == 2) {
        quickSort(palavras, 0, n - 1);
    } else {
        printf("Opção inválida.\n");
        return 1;
    }
    printf("\nPalavras ordenadas:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", palavras[i]);
    }
    printf("\nDigite uma palavra para buscar: ");
    scanf("%s", busca);
    if (binarySearch(palavras, n, busca)) {
        printf("Palavra encontrada.\n");
    } else {
        printf("Palavra não encontrada.\n");
    }
    return 0;
}
