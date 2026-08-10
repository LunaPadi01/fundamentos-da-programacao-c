#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Faça um programa que leia um numero e, caso ele seja positivo, calcule e mostre: 
• O numero digitado ao quadrado 
• A raiz quadrada do numero digitado */


int main (){
	
	float num, raizqua, potencia;
	
	
	printf("programa que le um numero e, caso ele seja positivo, calcula e mostra:\n");
	printf("O numero digitado ao quadrado e a raiz quadrada do mesmo.\n");
	printf("Digite um numero:");
	
	scanf("%f", &num);
	
	if (num >=0){
		
		raizqua = sqrt(num);
		potencia = pow(num, 2);
		
		printf("A raiz quadrada do numero eh: %f\n", raizqua);
		printf("A potencia do numero eh: %.f\n", potencia);
		
		
	}
	 else {
	 	
	 	printf("o numero eh invalido");
	 	
	 }
	
	
}
