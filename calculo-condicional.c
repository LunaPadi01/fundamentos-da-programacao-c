#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Leia um numero real. Se o numero for positivo imprima a raiz quadrada. Do contrário, 
imprima o numero ao quadrado.*/

int main (){
	
	float numreal, raizqua, exp, result;
	
	printf("Este programa le um numero real, se for positivo sera calculada a raiz quadrada porem se for negativo sera calculada a potencia do mesmo.\n");
    printf("Digite um numero:\n");
    
    scanf("%f", &numreal);
    
    if (numreal <0){
       printf("Digite o expoente:\n");
	   scanf("%f", &exp);
	   result = pow(numreal,exp);  
	   printf("o resultado da potencia eh: %.2f", result);  	
    	
	}
    
    else{
    	raizqua = sqrt(numreal);
    	printf("a raiz quadrada eh: %f", raizqua);
	} 
	return 0;
}
