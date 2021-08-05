void cardapio(){
	int i=0, n;
	FILE *f;
	lista *l;
	dados a;
	int flag = 0;
	l = NULL;
	dados vet[numeroDados()];
	n=numeroDados();
	if((f = fopen("bebida.bin", "rb"))!=NULL){
		while(fread(&a, sizeof(dados), 1, f) == 1){
			vet[i]=a;
			i++;
		}
		fclose(f);
	}
	if((f = fopen("comida.bin", "rb"))!=NULL){
		while(fread(&a, sizeof(dados), 1, f) == 1){
			vet[i]=a;
			i++;
		}
		fclose(f);
	}	
	if((f = fopen("vinho.bin", "rb"))!=NULL){
		while(fread(&a, sizeof(dados), 1, f) == 1){
			vet[i]=a;
			i++;
		}
		fclose(f);
	}
	QuickSort(vet, n);
	for(i=n-1;i>-1;i--){
		l = inserir(l, vet[i]);
	}
	do{
		puts("Escolha uma das opções: ");
		puts("1 - Bebidas");
		puts("2 - Pratos");
		puts("3 - Vinhos");
		puts("4 - Todos");
		puts("5 - Pesquisar prato");
		puts("6 - Voltar ao menu");
		scanf("%i", &i);
		system("cls");
		switch(i){
			case 1:
				exibir(l, i);
				system("pause");
				system("cls");
				break;
			case 2:
				exibir(l, i);
				system("pause");
				system("cls");
				break;
			case 3:
				exibir(l, i);
				system("pause");
				system("cls");
				break;
			case 4:
				exibir(l, i);
				system("pause");
				system("cls");
				break;
			case 5:
				pesquisar(l, n);
				system("pause");
				system("cls");
				break;
			case 6:
				break;
			default:
				puts("**Opção inválida.**");
		}
	}while(i != 6);
}
