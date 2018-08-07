#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>

int newMenu();

int menu(){
	setlocale(LC_ALL,"PORTUGUESE");
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
				printf("A primeira opcao foi escolhida\n");
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
		}
	}
}

int newMenu(){//novo menu
	int opcao;
	fflush(stdin);
	printf("Digite 1 para voltar ao menu anterior.\n");
	printf("Digite 0 para sair do programa.\n");
	scanf("%d",&opcao);
	switch(opcao){
		case 1:
			system("cls");
			fflush(stdin);
			menu();
			break;
		case 0:
			return 0;
			break;
	}
}

int main(){
	menu();
	system("pause");//pause o sistema
	return 0;
}
