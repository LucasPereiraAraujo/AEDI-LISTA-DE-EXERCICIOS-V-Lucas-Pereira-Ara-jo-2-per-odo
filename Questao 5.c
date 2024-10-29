#include<stdio.h>

int mdc(int a, int b){
	
	int r = a % b;
	
	if( r == 0){
		return b; 
	} else {
	 return mdc(b,r);	
	}
}


int main(){
	int a;
	int b;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &a);

	printf("Digite o segundo numero(seja menor que o primeiro):  ");
	scanf("%d", &b);
	
	int resultado = mdc(a, b);
	
	printf("O resultado e: %d", resultado);
	
	return 0;
}
