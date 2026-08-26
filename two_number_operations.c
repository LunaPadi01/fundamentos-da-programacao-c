#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Desenvolva um algoritmo que receba dois números, calcule e mostre a multiplicação 
entre eles, se ambos forem iguais. Caso o primeiro seja maior que o segundo, mostre a 
subtração do primeiro pelo segundo. Caso contrário, mostre a soma entre os dois.*/

int main (){
	
    float n1, n2, res;
    
    printf("Digite o primeiro numero: \n");
    scanf("%f", &n1);
    
    printf("Digite o segundo numero: \n");
    scanf("%f", &n2);
 
  if (n1 == n2){
  	res = n1 * n2;
  	printf("Resultado da multiplicacao: %2.f\n", res);
  }
   else if (n1 > n2){
   	res = n1 - n2;
   		printf("Resultado da subtracao: %2.f\n", res);
   }
   else {
   	res = n1 + n2;
   	printf("Resultado da soma: %2.f\n", res);
   }
 return 0;
}

/*Uma segunda forma de resolver este programa seria essa estrutura de if's:

  if (n1 == n2){ 
        printf("Multiplicação: %f.\n", n1*n2); 
    } 
    if (n1 > n2){ 
        printf("Subtração: %f.\n", n1-n2); 
    } 
    if (n1 < n2){ 
        printf("Soma: %f.\n", n1+n2); 
    } 

 */
