#include <stdio.h>
#define MAXTAMANHO 10

int buscaBinaria(int arr[], int inicio, int fim, int procurado) {
    if (inicio > fim) {
        return -1; 
    }
    int meio = inicio + (fim - inicio) / 2;
    if (arr[meio] == procurado) {
        return meio;
    }
    else if (procurado < arr[meio]) {
        return buscaBinaria(arr, inicio, meio - 1, procurado);
    }
    else {
        return buscaBinaria(arr, meio + 1, fim, procurado);
    }
}

int main() {
    int arr[10] = {1, 3, 5, 7, 9, 11, 42069};
    int TAMANHO = 10;
    int procurado = 7;

    int resultado = buscaBinaria(arr, 0, TAMANHO - 1, procurado);

    if (resultado != -1) {
        printf("O numero procurado foi encontrado na posicao %d", resultado);
    } else {
        printf("O numero nao foi encontrado, ou seja, nao etta presente na lista");
    }

    return 0;
}

