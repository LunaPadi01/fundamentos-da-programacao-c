#include <stdio.h>
#include <stdlib.h>

/* Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a
prestação for maior que 20% do salário imprima: Empréstimo não concedido, caso
contrário imprima: Empréstimo concedido */

int main (){
	
	float sal, prest, vinte;
	
	printf("Insira o salario do trabalhador: \n");
	scanf("%f", &sal);
	
	printf("Insira o valor da prestacao do emprestimo: \n");
	scanf("%f", &prest);
	
	vinte = sal * 0.2;
	
	if (prest > vinte){
		 printf("Emprestimo nao concedido amigo, ta mais que 20porcento\n");
	}  else {
		printf("Emprestimo concedido, parabensss\n");
	}
	
}

