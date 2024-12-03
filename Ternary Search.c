#include <stdio.h>

int buscaTernaria(int arr[], int esquerda, int direita, int alvo) {
    if (direita >= esquerda) {
        int terco1 = esquerda + (direita - esquerda) / 3;
        int terco2 = direita - (direita - esquerda) / 3;

        if (arr[terco1] == alvo) {
            return terco1;
        }
        if (arr[terco2] == alvo) {
            return terco2;
        }

        if (alvo < arr[terco1]) {
            return buscaTernaria(arr, esquerda, terco1 - 1, alvo);
        }
        else if (alvo > arr[terco1] && alvo < arr[terco2]) {
            return buscaTernaria(arr, terco1 + 1, terco2 - 1, alvo);
        }
        else {
            return buscaTernaria(arr, terco2 + 1, direita, alvo);
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21};
    int n = sizeof(arr) / sizeof(arr[0]);
    int alvo = 13;
    int resultado = buscaTernaria(arr, 0, n - 1, alvo);

    if (resultado != -1) {
        printf("Elemento encontrado na posição %d.\n", resultado);
    } else {
        printf("Elemento não encontrado.\n");
    }

return 0;
}
