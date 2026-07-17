// Exercicio 08 - Estrutura Sequencial
/*Faça um programa que receba o valor de um 
depósito e o valor da taxa de juros, calcule e mostre o valor do rendimento e o valor 
total depois do rendimento. */


#include <stdio.h>
#include <stdlib.h>

int main (){
	
	float valor, taxa, rendimento, valorF;
	
	printf("Insira o valor do deposito:\n");
	scanf("%f", &valor);
	
	printf("Qual o valor da taxa?\n");
	scanf("%f", &taxa);
	
	valorF = (valor + valor*taxa/100);
	rendimento = (valor * taxa/100);
	
    printf("Rendimento: %.2f\n", rendimento);
    printf("Valor total: %.2f\n", valorF);
	
		
}


