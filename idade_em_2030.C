/*  Faça um programa que receba o ano de 
nascimento de uma pessoa e ano atual, calcule e mostre:
a) a idade dessa pessoa; 
b) quantos anos essa pessoa terá em 2030;*/

#include <stdio.h>

int main(){
	
	int datanasc, idade, dois30;
	
	printf("Digite sua data de nascimento:\n");
	scanf("%i", &datanasc);
	
	idade  = 2026 - datanasc;
	dois30 = 2030 - datanasc;
	
	printf("Sua idade atual:%i\n", idade);
	printf("Sua idade em 2030:%i\n", dois30);
	
}
