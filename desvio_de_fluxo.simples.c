#include <stdio.h>

// Programa de desvio de fluxo simples com IF e ELSE.

int main(){
	
	float M;
	
	printf("Insira a nota (em decimal):\n");
	scanf("%f", &M);
	
	if (M >= 7.0){
		printf("Aprovado(a)!\n");
	}   else {
		  printf("Reprovado(a)!\n");
	}
	
}
