#include<stdio.h>

int comparar(int a, int b, int c){
	int maior = a;
	if(maior < b){
		return b;
	} if(maior < c) {
		return c;
	} else {
		return maior;
	}
}

int main(){
	int a = 54, b = 212, c = 5;
	
	int resultado = comparar(a,b,c);
	
	printf("Maior e: %d", resultado);
	
	return 0;
}
