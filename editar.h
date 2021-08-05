void editarPrato(){
	int codEtipo, flag = 0;
	FILE *f;
	char arq[14];
	dados d;
	codEtipo = levalidaTipo();
	if(codEtipo == 1){
		strcpy(arq, "bebida.bin");
		textcolor(6);
	}else{
		if(codEtipo == 2){
			strcpy(arq, "comida.bin");
			textcolor(2);
		}else{
			strcpy(arq, "vinho.bin");
			textcolor(4);
		}
	}
	
	if((f = fopen(arq, "r+b"))!=NULL){
		do{
			puts("Digite o codigo do produto: ");
			scanf("%i", &codEtipo);
			if(codEtipo < 0)
				puts("**Codigo inválido**");		
		}while(codEtipo < 0);
		system("cls");
		while(fread(&d, sizeof(dados), 1, f) == 1){
			if(codEtipo == d.codigo){
				puts(d.nome);
				puts(d.descricao);
				printf("R$ %.2f\n", d.preco);
				fseek(f, sizeof(dados)*-1, SEEK_CUR);
				puts("*Obs*: se não quiser alterar o dado apenas digite o dado original");
				d.preco = levalidaPreco();
				levalidaString(d.descricao, "a descrição");
				fwrite(&d, sizeof(dados), 1, f);
				fseek(f, sizeof(dados)*0, SEEK_END);
				system("cls");
				puts("Dado alterado com sucesso.");
				system("pause");
				flag = 1;
			}
		}
		fclose(f);
		if(flag == 0){
			puts("**Codigo não encontrado no tipo de produto.**");
			system("pause");
			system("cls");
		}
	}else{
		puts("**ERRO**: Nenhum item cadastrado nesse tipo.");
		system("pause");
		system("cls");
	}
}
