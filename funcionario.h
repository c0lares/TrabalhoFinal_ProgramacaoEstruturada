void funcionario(){
	int op;
	char usuario[13];
	puts("Digite o usuario: ");
	fflush(stdin);
	gets(usuario);
	puts("Digite a senha: ");
	scanf("%i", &op);
	system("cls");
	if((strcmp(usuario, "admrodrigues") == 0) && (op == 123352)){
		puts("Aberto com sucesso.");
		do{
			puts("Digite a opção que deseja: ");
			puts("1 - Cadastrar um prato");
			puts("2 - Editar um prato");
			puts("3 - Excluir um prato");
			puts("4 - Voltar para o cardapio");
			scanf("%i", &op);
			switch(op){
				case 1:
					system("cls");
					armazenar(cadastrar());
					system("cls");
					break;
				case 2:
					system("cls");
					editarPrato();
					system("cls");
					break;
				case 3:
					system("cls");
					excluir();
					system("pause");
					system("cls");
					break;
			}
			textcolor(0);
		}while(op != 4);
	}else{
		puts("**Senha ou usuario inválidos.**");
		system("pause");
	}
}
