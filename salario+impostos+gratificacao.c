/*  Faça um programa que receba o salário-base 
de um funcionário, calcule e mostre o salário a receber, sabendo-se que esse funcionário 
tem gratificação de 5% sobre o salário-base e paga imposto de 7% sobre o salário-base. */

int main (){
	
	float salarioBase, salariofinal, gratf, imposto;
	
	printf("ESSE PROGRAMA MOSTRA O SALARIO ATUALIZADO COM BASE NA GRATIFICACAO DE 5PORCENTO E O IMPOSTO DE 7PORC SOBRE O SALARIO:\n");
	printf("Insira o salario base: \n");
	scanf("%f", &salarioBase);
	
	gratf = (salarioBase * 5/100);
	imposto =(salarioBase * 7/100);
	
	salariofinal = (salarioBase + gratf - imposto);
	printf("Salario a receber: %.2f\n", salariofinal);
	
}

/* Excelente!! foi apenas 2 linhas a mais do que precisava.
De forma mais simplificada com apenas duas variaveis seria:
liquido = sal + sal*0.05 - sal*0.07; 
printf("Salário a receber: %.2f.\n", liquido); */


