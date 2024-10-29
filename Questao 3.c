#include <stdio.h>

int fibonacci(int n){
	if(n < 2 ){
		return n;
	} else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}

int main(){
	int n;
	int resultado;
	printf("Insira o numero para que o programa calcule qual numero da sequencia de fibonacci correspnde a ele: ");
	scanf("%d", &n);
	
	resultado = fibonacci(n);
	
	printf("O numero na posicao %d da sequencia de fibonacci e %d", n, resultado);
	
	return 0;
}
