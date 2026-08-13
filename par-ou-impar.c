#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Faça um programa que receba um número inteiro e verifique se este número é par ou
ímpar. */

int main (){
	
	int num;
	
	printf("Esse programa vai verificar se o numero que voce for digitar eh par ou impar.\n");
	printf("Digite um numero:\n");
	
	scanf("%i", &num);
	 
	 if (num % 2 == 0){
	 	printf("O numero eh par!!");
	 }
	
	 else {
	 
	  printf("O numero eh impar!!");
	
	 }
	 
}
