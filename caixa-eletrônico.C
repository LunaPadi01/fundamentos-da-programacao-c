/* Desenvolva um algoritmo que emule um caixa eletrônico. O usuário deve inserir o valor 
total a ser sacado da máquina e o algoritmo deve informar quantas notas de 100, 50, 
20, 10, 5 ou 2 reais serão entregues. Deve-se escolher as notas para que o usuário receba 
o menor número de notas possível. */

#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int saque, cem, cinq, vint, dez, cinco, dois;
	
	printf("Valor a ser sacado:");
	scanf("%d", &saque);
	
	
	cem = saque / 100;
	saque = saque % 100;
	cinq = saque / 50;
	saque = saque % 50;
	vint = saque / 20;
	saque = saque % 20;
	dez = saque / 10;
	saque = saque % 10;
	cinco = saque / 5;
	saque = saque % 5;
	dois = saque / 2;

	  printf("n de notas de 100: %d.\n", cem);
	  printf("n de notas de 50: %d.\n", cinq);
	printf("n de notas de 20: %d.\n", vint);
	printf("n de notas de 10: %d.\n", dez);
	printf("n de notas de 5: %d.\n", cinco);
	printf("n de notas de 2: %d.\n", dois);
	
	
	
	
	
}
    

    
    
	
	
    
