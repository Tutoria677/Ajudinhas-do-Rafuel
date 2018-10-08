#include<stdio.h>
#include<locale.h>//serve para usar o SETLOCALE()
#include<stdlib.h>//serve para habilitar as funções system()
#include<conio.h>//serve para utilizar o GETCH()
#include<windows.h>//NEM SEI PQ TA AQUI, MAS TA.

int newMenu();
void Cardapio();

int menu(){
	setlocale(LC_ALL,"PORTUGUESE");// Habilita acentos e caracteres especiais
	fflush(stdin);//limpa o buffer
	for( ; ; ){//loop infinito
		int escolha;
		printf("1 - Cardápio\n");
		printf("0 - Sair\n");
		scanf("%d",&escolha);
		system("cls");//limpa a tela
		switch(escolha){//Menu 
			case 1 :
				system("cls");//limpa a tela
				Cardapio();
				fflush(stdin);
				getch();//espera a tecla ENTER ser pressionada
				//return newMenu();//retorna o novo menu
				break;
			case 2:
				system("color 05");
				fflush(stdin);
				system("cls");
				return menu();
				break;
			case 0:
				fflush(stdin);//limpa o buffer
				return 0;//sai do programa
				break;
			default:
				system("cls");
				printf("Opção inválida.\n");
				system("pause");
				system("cls");
				return menu();
				break;
		}
	}
}

int newMenu(){//novo menu
	int opcao;
	int numPedido[50];
	int i = 0;
	
	fflush(stdin);
	printf("1 - Adicionar um pedido.\n");
	printf("2 - Alterar Pedido\n");//aqui eu posso usar caracteres especiais por causa do SETLOCALE
	printf("3 - Excluir Pedido\n");
	printf("0 - Retornar\n");
	scanf("%d",&opcao);
	switch(opcao){
		case 1:
			system("cls");
			fflush(stdin);
			menu();
			break;
		case 2:
			fflush(stdin);
			system("cls");
			system("color 07");
			return newMenu();
			break;
		case 0:
			system("cls");
			menu();
			break;
		default:
			system("cls");
			printf("opção inválida.\n");
			system("pause");
			system("cls");
			return newMenu();
			break;
	}
}

void Cardapio(){
	char resposta;
	
	printf("Carne, arroz e farinha\n\n");
	printf("Frango, macarrão e farinha\n\n");
	printf("Peixe, farinha e farinha\n\n");
	printf("Farinha, farinha e farinha\n");
	printf("Fazer pedido?\n");
	printf("S/N\n");
	scanf("%c",&resposta);
		if(resposta == 's' || resposta == 'S'){
			system("cls");
			//newMenu();
		}
	
}

int main(){
	menu();
	system("pause");//pause o sistema
	return 0;
}
