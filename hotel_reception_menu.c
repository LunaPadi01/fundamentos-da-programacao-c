#include <stdio.h>
#include <stdlib.h>

/*Suponha que você esteja desenvolvendo o sistema de um hotel que deva exibir mensagens na recepção para diferentes ações dos hospedes, são elas:

1-Fazer Check-in
2-Chamar serviço de quarto
3-Fazer pedido */

int main (){
	
	int b;
	
	printf("<< RECEPCAO ONLINE - BEM-VINDO(A)! >>\n");
	printf("Digite:\n");
	printf("1-Fazer Check-in.\n");
	printf("2-Chamar serviço de quarto.\n");
	printf("3-Fazer pedido?.\n");
	
	scanf("%i", &b);
	
	switch(b){
		
		case 1: printf("Check-in realizado com sucesso!\n");
		break;
		
		case 2: printf("Funcionario chamado com sucesso! aguarde em seu quarto.\n");
		break;
		
		case 3: printf("Cardapio acaba de ser enviado em seu numero de WhatsApp!\n");
		        printf("Caso nao tenha recebido, sair e digitar o numero novamente.\n");
		break;
		
		default: printf("Opcao invalida.\n");
		break;
		
			}
    
	
	
}
