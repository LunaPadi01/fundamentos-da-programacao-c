#include <stdio.h>

// meu programa que faz operações aritméticas

int main(){
	
	int A, B, soma, sub, div, mult;
	
	printf("Digite o primeiro valor:\n");
	scanf("%d", &A);

    printf("Digite o segundo valor:\n");
	scanf("%d", &B);
	
	soma = A + B;
	sub = A - B;
	div = A / B;
	mult = A * B;	
	
	printf("Resultados:\n");
	printf("Soma: %d.\n", soma);
	printf("Subtracao: %d.\n", sub);
	printf("Divisao: %d.\n", div);
	printf("Multiplicacao: %d.\n", mult);
	
	
	
}
