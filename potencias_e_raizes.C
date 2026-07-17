/* Faça um programa que receba um número 
positivo e maior que zero, calcule e mostre: 
 
 a) o número digitado ao quadrado; 
 b) o número digitado ao cubo; 
 c) a raiz quadrada do número digitado; 
 d) a raiz cúbica do número digitado.*/

#include <stdio.h>
#include <math.h>

int main() {
	float numero, aoqua, aocubo, raizqua, raizcubo;
	
	printf("Digite algum numero de 0 a 100:");
	scanf("%f", &numero);
	
	aoqua = numero * numero;
	aocubo = numero * numero * numero;
	raizqua = sqrt(numero);
	raizcubo = cbrt(numero);
	
	printf("%.2f ao quadrado: %.2f\n", numero, aoqua);
	printf("%.2f ao cubo: %.2f\n", numero, aocubo);
	printf("A raiz quadrada de %.2f eh:%.2f\n", numero, raizqua);
	printf("A raiz cubica de %.2f eh:%.2f\n", numero, raizcubo);
	
	
	


	
	

	

}
