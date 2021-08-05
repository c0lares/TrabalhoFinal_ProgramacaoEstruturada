void excluir(){
	FILE *f, *f2;
	dados d;
	int codEtipo, flag=0;
	char arq[14];
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
	if((f = fopen(arq, "rb"))!=NULL){
		f2 = fopen("temp.bin", "wb");
		do{
			puts("Digite o codigo do produto: ");
			scanf("%i", &codEtipo);
			if(codEtipo < 0)
				puts("Codigo invalido");		
		}while(codEtipo < 0);
		system("cls");
		while(fread(&d, sizeof(dados), 1, f)==1){
			if(codEtipo == d.codigo){
				if(d.tipo == 1)
					puts("Bebidas");
				else
					if(d.tipo == 2)
						puts("Pratos");
					else
						puts("Vinhos");
				puts(d.nome);
				puts(d.descricao);
				printf("R$ %.2f\n", d.preco);
				flag = 1;
			}else{
				fwrite(&d, sizeof(dados), 1, f2);
			}
		}
		fclose(f);
		fclose(f2);
		if(flag==1){
			f2 = fopen("temp.bin", "rb");
			f = fopen(arq, "wb");
			while(fread(&d, sizeof(dados), 1, f2)==1){
				fwrite(&d, sizeof(dados), 1, f);
			}
			puts("**Dado removido com sucesso.**");
		}else{
			puts("**Dado não encontrado.**");
		}
	}else{
		puts("**Nenhum produdo cadastrado nesse tipo.**");
	}
}
