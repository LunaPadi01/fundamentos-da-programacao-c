#include <stdio.h>
#include <stdlib.h>
 
/* Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles,
assim como a diferença existente entre ambos */ 

int main(){
	
	int num1, num2, dif;
	
	printf("Digite um numero: ");
	scanf("%i", &num1);
	
    printf("Digite um outro numero: ");
	scanf("%i", &num2);
	
	if (num1 > num2){
		printf("%i eh maior que %i\n ", num1, num2);
		dif = num1 - num2;
		printf("A diferenca entre eles eh: %i\n ", dif);
	} 
	else if (num2 > num1){
	printf("%i eh maior que %i\n ", num2, num1);
	dif = num2 - num1;
	printf("A diferenca entre eles eh: %i\n ", dif);
	}
	else {
		printf("Os numeros sao iguais!!\n");
	}
	
	

}
