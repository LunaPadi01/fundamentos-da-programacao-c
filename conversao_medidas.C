/*  Sabe-se que: 
1 pé = 12 polegadas; 
1 jarda = 3 pés; 
1 milha = 1760 jardas; 
Faça um programa que receba uma medida em pés, faça as conversões a seguir e mostre 
os resultados. 
a) polegadas; 
b) jardas; 
c) milhas. 
*/

#include <stdio.h>
#include <math.h>

int main(){
	
	int pes, jardas, milha;
	
	printf("Esse programa recebe medida em pes e converte para jardas e milhas.\n");
	printf("Insira uma medida em pes:\n");
	scanf("%i", &pes);
	
	jardas = pes/3;
	milha = pes/5280;
	
	printf("Medida em jardas:%i\n", jardas);
	printf("Medida em milhas:%i\n", milha);
	
	
	
}
