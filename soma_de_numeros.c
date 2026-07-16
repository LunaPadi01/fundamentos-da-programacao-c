#include <stdio.h>
#include <stdlib.h>

// Faça um programa que receba quatro 
//números inteiros, calcule e mostre a soma desses números. 

int main(int argc, char *argv[]) {
	
	int n1, n2, n3, n4, soma;
	
	printf("Informe o primeiro numero:\n");
	scanf("%d", &n1);
	printf("Informe o segundo numero:\n");
	scanf("%d", &n2);
	printf("Informe o terceiro numero:\n");
	scanf("%d", &n3);
	printf("Informe o quarto numero:\n");
	scanf("%d", &n4);
	
	soma = n1 + n2 + n3 + n4;
	
	printf("O resultado da soma eh: %d.\n", soma);
	system("pause");
	
	return 0;
}
