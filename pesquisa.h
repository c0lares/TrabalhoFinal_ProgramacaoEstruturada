void pesquisar(lista *l, int n){
	lista *p;
	int cod, flag=0;
	do{
		puts("Digite o codigo do produto: ");
		scanf("%i", &cod);
		if(cod < 0)
			puts("**Codigo inválido.**");		
	}while(cod < 0);
	for(p=l;p!=NULL;p=p->prox){
		if(cod == p->info.codigo){
			flag=1;
			if(p->info.tipo == 1){
				textcolor(6);
				puts("Bebidas");
			}else{
				if(p->info.tipo == 2){
					textcolor(2);
					puts("Pratos");
				}
				else{
					textcolor(4);
					puts("Vinhos");
				}
			}
			puts(p->info.nome);
			puts(p->info.descricao);
			printf("R$ %.2f\n", p->info.preco);
			break;
		}
	}
	textcolor(0);
	if(flag==0)
		puts("**Dado não encontrado.**");
}
