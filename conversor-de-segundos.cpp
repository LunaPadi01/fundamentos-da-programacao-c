// Exercício 11 - Estrutura Sequencial;
/*  Jeremias possui um cronômetro que consegue marcar o tempo apenas em segundos. 
Sabendo disso, desenvolva um algoritmo que receba o tempo cronometrado, em 
segundos, e diga quantas horas, minutos e segundos se passaram a partir do tempo 
cronometrado.*/

#include <stdio.h>

int main (){
	
	int seg, min, hora;
	
	printf("Insira o tempo em segundos:\n");
	scanf("%i", &seg);
	
	hora = seg/3600;
	seg = seg % 3600;
    min = seg / 60;
    seg = seg % 60;
	
	printf("Horas: %i\n", hora );
	printf("Minutos: %i\n", min);
	printf("Segundos: %i.\n", seg);
	
	
}

