#include <stdio.h>
#include <stdlib.h>

/*  Faça um programa que receba o salário de 
um funcionário e o percentual de aumento, calcule e mostre o valor do aumento e o 
novo salário. */

int main(int argc, char *argv[]) {
	
	float salario, valoraumento, mostravalor, salarioat;
	printf("Insira o salario do funcionario: \n");
	scanf("%f", &salario);
	
	printf("Digite o percentual de aumento: \n");
	scanf("%f", &valoraumento);
	
	mostravalor = (salario * valoraumento/100);
	printf("Este e o valor de aumento: %.2f\n", mostravalor);
	
	salarioat = (salario + mostravalor);
	
	printf("Este e o salario atualizado: %.2f\n", salarioat);
	
	system("pause");
	
	return 0;
}
