#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Desenvolva um algoritmo que receba dois números, calcule e mostre a multiplicação 
entre eles, se ambos forem iguais. Caso o primeiro seja maior que o segundo, mostre a 
subtração do primeiro pelo segundo. Caso contrário, mostre a soma entre os dois.  */

int main (){
	float a, b, res;
	int ok;
	
	printf("Esta eh uma calculadora\n");
		printf("Voce pode digitar dois numeros!\n");
			printf("Digite o primeiro numero: \n");
			scanf("%f", &a);
				printf("Digite o segundo numero: \n");
				scanf("%f", &b);
			printf("Digite a operacao desejada\n");
					printf("1- Soma.\n");
					printf("2- Subtracao.\n");
					printf("3- Multiplicacao.\n");
					printf("4- Divisao\n");
			scanf("%d", &ok);
    
	switch (ok){
        	
			case 1 : 
        	 res = a + b;
        	 printf("A soma eh %.2f", res);
        	 break;
        	 
        	case 2 : 
        	 res = a - b;
        	 printf("A subtracao eh %.2f", res);
        	 break;
        	 
        	case 3 : 
        	 res = a * b;
        	 printf("A multiplicacao eh %.2f", res);
        	 break;
        	 
        	case 4 : 
        	 res = a / b;
        	 printf("A divisao eh %.2f", res);
        	 break;
        		
		}	
	
}
