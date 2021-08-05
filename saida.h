void exibir(lista *l, int op){
	lista *p;
	int flag=0;
	switch(op){
		case 1:
			textcolor(6);
			puts("	.-----------.");
			puts("	|  BEBIDAS  |");
			puts("	.-----------.");
			for(p=l;p!=NULL;p=p->prox){
				if(p->info.tipo == 1){
					printf("%i...%s\n", p->info.codigo, p->info.nome);
					puts(p->info.descricao);
					printf("R$ %.2f\n\n", p->info.preco);
					flag = 1;
				}
			}
			if(flag==0)
				puts("**Nenhuma bebida encontrada.**");
			break;
		case 2:
			textcolor(2);
			puts("	.----------.");
			puts("	|  PRATOS  |");
			puts("	.----------.");
			for(p=l;p!=NULL;p=p->prox){
				if(p->info.tipo == 2){
					printf("%i...%s\n", p->info.codigo, p->info.nome);
					puts(p->info.descricao);
					printf("R$ %.2f\n\n", p->info.preco);
					flag = 1;
				}
			}
			if(flag==0)
				puts("**Nenhum prato encontrado.**");
			break;
		case 3:
			textcolor(4);
			puts("	.----------.");
			puts("	|  VINHOS  |");
			puts("	.----------.");
			for(p=l;p!=NULL;p=p->prox){
				if(p->info.tipo == 3){
					printf("%i...%s\n", p->info.codigo, p->info.nome);
					puts(p->info.descricao);
					printf("R$ %.2f\n\n", p->info.preco);
					flag = 1;
				}
			}
			if(flag==0)
				puts("**Nenhum vinho encontrado.**");
			break;
		case 4:
			textcolor(6);
			puts("	.-----------.");
			puts("	|  BEBIDAS  |");
			puts("	.-----------.");
			for(p=l;p!=NULL;p=p->prox){
				if(p->info.tipo == 1){
					printf("%i...%s\n", p->info.codigo, p->info.nome);
					puts(p->info.descricao);
					printf("R$ %.2f\n\n", p->info.preco);
					flag = 1;
				}
			}
			if(flag==0)
				puts("**Nenhuma bebida encontrada.**");
			flag=0; 
			textcolor(2);
			puts("	.----------.");
			puts("	|  PRATOS  |");
			puts("	.----------.");
			for(p=l;p!=NULL;p=p->prox){
				if(p->info.tipo == 2){
					printf("%i...%s\n", p->info.codigo, p->info.nome);
					puts(p->info.descricao);
					printf("R$ %.2f\n\n", p->info.preco);
					flag = 1;
				}
			}
			if(flag==0)
				puts("**Nenhum prato encontrado.**");
			flag=0; 
			textcolor(4);
			puts("	.----------.");
			puts("	|  VINHOS  |");
			puts("	.----------.");
			for(p=l;p!=NULL;p=p->prox){
				if(p->info.tipo == 3){
					printf("%i...%s\n", p->info.codigo, p->info.nome);
					puts(p->info.descricao);
					printf("R$ %.2f\n\n", p->info.preco);
					flag = 1;
				}
			}
			if(flag==0)
				puts("**Nenhum vinho encontrado.**");
			break;
	}
	textcolor(0);
}
