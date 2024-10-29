#include<stdio.h>

 int soma(int n){
 	int controle = 1;
 	if(n == 0){
 		
 		return 0;
 		
	 }
 	if(controle == n){
 		
 		return n;
 		
	 } else {
	 	
	 	return n += soma(n - 1);
	 }
	 }
 
 
 int main(){
 	int resultado;
 	
 	printf("Teste com o numero 5:");
 	
 	resultado = soma(5);
 	printf("\n%d", resultado);
 	
	 printf("\nTeste com o numero 7:");
 	
 	resultado = soma(7);
 	printf("\n%d", resultado);
 	
 	printf("\nTeste com o numero 1:");
 	
 	resultado = soma(1);
 	printf("\n%d", resultado);
 	 
	printf("\nTeste com o numero 2:");
 	
 	resultado = soma(2);
 	printf("\n%d", resultado);
 	
 	printf("\nTeste com o numero 0:");
 	
 	resultado = soma(0);
 	printf("\n%d", resultado);
 	
 	
 	return 0;
 }
