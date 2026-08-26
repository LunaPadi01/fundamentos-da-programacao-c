#include <stdio.h>
#include <stdlib.h>

/*Desenvolva um algoritmo que receba três números. O algoritmo deve imprimir 
"Condição satisfeita", na tela, caso o primeiro dado inserido seja maior do que os outros 
dois (o primeiro não pode ser igual a nenhum). Caso contrário, deve ser impressa a 
mensagem: "Erro". */

int main() {
	 
	 int first, sec, terc;
	 
	 printf("Digite o primeiro numero: \n");
	 scanf("%i", &first);
	 
	  
	 printf("Digite o segundo numero: \n");
	 scanf("%i", &sec);
	 
	  
	 printf("Digite o terceiro numero: \n");
	 scanf("%i", &terc);
	 	
	 	
	 	if (first > sec && terc){
	 		printf("Condicao satisfeita");
		 } 
		 else {
		 	printf("Erro");
		 }
		 
        return 0;
}
