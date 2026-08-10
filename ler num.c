#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Leia um numero fornecido pelo usuário. Se esse número for positivo, calcule a raíz
quadrada do número. Se o número for negativo, mostre uma mensagem dizendo que o ´
número é inválido. */

int main(){
	double num, resultado;
	
	printf("Digite qualquer numero para calcular a raiz quadrada:\n");
	scanf("%lf", &num);
	
	if (num >=0){
		resultado = sqrt(num);
		printf("A raiz quadrada eh: %lf", resultado);
		
	}
	
	else {
		
		printf("o numero eh invalido");
	}
}
