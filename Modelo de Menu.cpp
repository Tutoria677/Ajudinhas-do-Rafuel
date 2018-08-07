#include<stdio.h>
#include<locale.h>//serve para usar o SETLOCALE()
#include<stdlib.h>//serve para habilitar as funções system()
#include<conio.h>//serve para utilizar o GETCH()
#include<windows.h>//NEM SEI PQ TA AQUI, MAS TA.

int newMenu();

int menu(){
	setlocale(LC_ALL,"PORTUGUESE");// Habilita acentos e caracteres especiais
	fflush(stdin);//limpa o buffer
	for( ; ; ){//loop infinito
		int escolha;
		printf("Digite 1 para ir ao novo menu.\n");
		printf("DIgite 2 para mudar a cor para rosa.\n");
		printf("Digite 0 para sair do programa.\n");
		scanf("%d",&escolha);
		system("cls");//limpa a tela
		switch(escolha){//Menu 
			case 1 :
				printf("A primeira opção foi escolhida\n");
				fflush(stdin);
				printf("Pressione ENTER para prosseguir.");
				getch();//espera a tecla ENTER ser pressionada
				system("cls");//limpa a tela
				return newMenu();//retorna o novo menu
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
	fflush(stdin);
	printf("Digite 1 para voltar ao menu anterior.\n");
	printf("Digite 2 para voltar as cores padrões.\n");//aqui eu posso usar caracteres especiais por causa do SETLOCALE
	printf("Digite 0 para sair do programa.\n");
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
			return 0;
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

int main(){
	menu();
	system("pause");//pause o sistema
	return 0;
}
