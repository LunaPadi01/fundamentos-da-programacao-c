// exercício de estrutura sequencial. Este programa calcula a média de 3 notas;
// Ao final, mostra o resultado do calculo na tela.

#include <stdio.h>

int main(){
	
 float nota1, nota2, nota3, media;
 
 printf("Digite tres notas em sequencia: %f.\n");
 scanf("%f", &nota1);
 scanf("%f", &nota2);
 scanf("%f", &nota3);

media = (nota1+nota2+nota3)/3;

 printf("Resultado da media: %2.f.\n", media);
	
}
