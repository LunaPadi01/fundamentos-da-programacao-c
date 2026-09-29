#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Desenvolva um algoritmo que peça para que o usuário informe a base e a altura de um 
retângulo, e um terceiro número inteiro "op". Caso o usuário escolha "op" igual a 0, 
calcule e mostre o perímetro do retângulo. Caso o usuário insira um valor 1 para "op", 
calcule e mostre a área do retângulo. Se o usuário inserir um valor diferente de 0 e 1 
para "op", mostrar a mensagem "Opção inválida.".*/

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	float bas, alt, calc;
	int op;
	
	
	printf("Digite a base do retangulo: \n");
	    scanf("%f", &bas);
	printf("Digite a altura do retangulo: \n");
		scanf("%f", &alt);

    printf("Opções de processamento: \n");
    printf("0 para cálculo do perímetro: \n");
    printf("1 para calculo da area: \n");
       scanf("%i", &op);
    
    switch (op){
    	
    	case 0: 
    	calc = (bas + alt)*2;
    	printf("Perímetro do retângulo: %.2f.", calc);
        break;
        
        case 1:
        	calc = bas * alt;
            printf("Área do retângulo: %.2f.", calc);
            break;
            
        default :
        	if(op < 0){
        		printf("opção inválida");
			}
			if(op > 1){
				printf("opção inválida");
			}
	}
	
}
