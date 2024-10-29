#include <stdio.h>

#define TAMANHO 100 //honestamente tenho preguica de usar memoria dinamica, e nao dava pra declar o array dps

void declarar(int t, int inicio, float pa, float array[]) {
    array[0] = inicio;
    int i;
    for (i = 1; i < t; i++) {  //ignora o resto array que nao vamos usar
        array[i] = array[i - 1] + pa;
    }
}

void printar(int t, float array[]) {
    int i;
    for (i = 0; i < t; i++) { //okay, isso definitivamente nao é uma boa pratica com a memoria LAKSASJK
        printf("%.2f ", array[i]);
    }
}

int main() {
    int t, inicio;
    float pa;
    float array[TAMANHO];

    printf("Insira a quantidade de elementos do array: ");
    scanf("%d", &t); //pra preencher o array só ate o usuario pediu
    printf("Insira o valor inicial: ");
    scanf("%d", &inicio);
    printf("Insira a razao da progressao: ");
    scanf("%f", &pa);

    declarar(t, inicio, pa, array);
    
    printar(t, array);

    return 0;
}

