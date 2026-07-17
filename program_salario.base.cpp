/*  Faça um programa que receba o salário-base 
de um funcionário, calcule e mostre o seu salário a receber, sabendo-se que esse 
funcionário teve gratificação de R$ 600,00 e paga imposto de 10% sobre o salário base. */

#include <stdio.h>

int main(){
	   
    float salario, liquido;
    
    printf("{ESTE PROGRAMA CALCULA O SALARIO INSERIDO, SOMA OS 600,00 E DESCONTA OS 10PORCENTO MOSTRANDO O VALOR A RECEBER}\n");
    printf("insira o salario base: \n");
    scanf("%f", &salario);
    
    liquido = (salario + 600.0 - salario*0.1);

	    
    
    
    printf("salario a receber: %.2f\n", liquido);

}
