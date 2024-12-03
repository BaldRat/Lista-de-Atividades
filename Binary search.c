#include <stdio.h>

int busca_binaria(int vetor[], int tamanho, int elemento) {
    int inicio = 0;
    int fim = tamanho - 1;

    while (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;

        if (vetor[meio] == elemento) {
            return meio;
        } else if (vetor[meio] < elemento) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }
    return -1;
}

int main() {
    
    int tamanho = 8;
    int vetor[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int elemento;

    printf("Lista ordenada: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("Digite o elemento a ser buscado: ");
    scanf("%d", &elemento);

    int resultado = busca_binaria(vetor, tamanho, elemento);

    if (resultado != -1) {
        printf("Elemento encontrado no índice: %d\n", resultado);
    } else {
        printf("Elemento não encontrado.\n");
    }

    return 0;
}
