#include <stdio.h>
#include <stdlib.h>

/*Desenvolva um programa que receba como entrada um número inteiro que represente um dos 7 dias da semana e imprima na tela se esse dia é útil, final de semana ou inválido.

Considere que Domingo é o dia 1 e Sábado o dia 7. */

int main(){
	  
	  int a;
	  
	  printf("Insira um valor de 1 a 7\n");
	  scanf("%i", &a);
	  
	  switch(a){
	  	
	  	case 1: printf("Domingo.\n");
	  	break;
	  	
	  	case 2: printf("Segunda-feira.\n");
	  	break;
	  	
	  	case 3: printf("Terca-feira.\n");
	  	break;
	  	
	  	case 4: printf("Quarta-feira.\n");
	  	break;
	  	
	  	case 5: printf("Quinta-feira.\n");
	  	break;
	  	
	    case 6: printf("Sexta-feira.\n");
		break;
	  	
	  	case 7: printf("Sabado.\n");
	  	break;
	  	
	  	default: 
	  	    printf("Valor invalido.\n");
	  	    break;
	  	
	  }
	
	
}
