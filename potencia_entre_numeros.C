/*  Faça um programa que receba dois números 
maiores que zero, calcule e mostre um elevado ao outro. */

#include <stdio.h>
#include <math.h>

int main(){
	
	float num1, num2, total;
	
	printf("Esse programa calcula algum numero elevado a algum outro (maior que zero).\n");
	printf("Digite um numero:\n");
	scanf("%f", &num1);
	
	printf("Digite outro numero:\n");
    scanf("%f", &num2);
    
    total = pow(num1, num2);
    
    printf("Resultado da potencia:%.2f\n", total);
    
	
}
