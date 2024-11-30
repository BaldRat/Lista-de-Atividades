#include <stdio.h>
#include <math.h>

int jumpSearch(int arr[], int n, int x) {
    int salto = sqrt(n);
    int prev = 0;

    while (arr[(prev + salto < n ? prev + salto : n) - 1] < x) {
        prev += salto;
        if (prev >= n) {
            return -1;
        }
    }

    for (int i = prev; i < (prev + salto < n ? prev + salto : n); i++) {
        if (arr[i] == x) {
            return i;
        }
    }

    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;

    printf("Informe o número a ser buscado: ");
    scanf("%d", &x);

    int resultado = jumpSearch(arr, n, x);

    if (resultado != -1) {
        printf("Elemento %d encontrado no índice %d.\n", x, resultado);
    } else {
        printf("Elemento %d não encontrado.\n", x);
    }

    return 0;
}
