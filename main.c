#include <stdio.h>
#include <conio.c>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include "struct.h"
#include "armazenar.h"
#include "inserir.h"
#include "cadastrar.h"
#include "excluir.h"
#include "editar.h"
#include "ordenação.h"
#include "pesquisa.h"
#include "funcionario.h"
#include "saida.h"
#include "cardapio.h"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int op;
	
	do{
		textbackground(15);
		textcolor(0);
		puts(".---------------------------------.");
		puts("|BEM VINDO AO RESTAURANTE RODRIGUES|");
		puts(".---------------------------------.");
		printf("\n");
		printf("\n");
		puts("Digite a opção que deseja:");
		puts("1 - Abrir o cardapio.......................");
		puts("2 - Editar cardapio (somente funcionarios).");
		puts("3 - Encerrar o programa....................");
		scanf("%i", &op);
		switch(op){
			case 1:
				system("cls");
				cardapio();
				system("pause");
				system("cls");
				break;
			case 2:
				system("cls");
				funcionario();
				system("cls");
				break;
			case 3:
				exit(1);
			default:
				puts("Opção invalida");
				system("pause");
				system("cls");	
		}
	}while(1);
	return 0;
}
