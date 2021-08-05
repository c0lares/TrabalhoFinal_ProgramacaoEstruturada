int levalidaTipo();
void levalidaString(char *nome, char c[]);
float levalidaPreco();
dados cadastrar(){
	dados d;
	d.tipo = levalidaTipo();
	if(d.tipo==1)
		textcolor(6);
	else
		if(d.tipo==2)
			textcolor(2);
		else
			textcolor(4);
	d.codigo = levalidaCodigo();
	levalidaString(d.nome, "o nome");
	levalidaString(d.descricao, "a descrição");
	d.preco = levalidaPreco();
	return d;
}


int levalidaCodigo(){
	int cod;
	dados a;
	int flag;
	FILE *f;
	lista *l, *p;	
	l = NULL;
	if((f = fopen("bebida.bin", "rb"))!=NULL){
		while(fread(&a, sizeof(dados), 1, f) == 1){
			l = inserir(l, a);
		}
		fclose(f);
	}
	if((f = fopen("comida.bin", "rb"))!=NULL){
		while(fread(&a, sizeof(dados), 1, f) == 1){
			l = inserir(l, a);
		}
		fclose(f);
	}	
	if((f = fopen("vinho.bin", "rb"))!=NULL){
		while(fread(&a, sizeof(dados), 1, f) == 1){
			l = inserir(l, a);
		}
		fclose(f);
	}	
	do{
		flag = 0;
		puts("Digite o código do produto: ");
		scanf("%i", &cod);
		if(cod < 0)
			puts("**Código invalido.**");	
		for(p=l;p!=NULL;p=p->prox){
			if(cod == p->info.codigo){
				flag=1; 
				puts("**Codigo já cadastrado.**");
				break;
			}
		}
	}while(cod < 0 || flag == 1);
	return cod;
}

void levalidaString(char *nome, char c[]){
	do{
		printf("Digite %s: \n", c);
		fflush(stdin);
		gets(nome);
		if(strcmp(nome, "") == 0)
			puts("**Informação obrigatoria.**"); 
	}while(strcmp(nome, "") == 0);
}

float levalidaPreco(){
	float p;
	do{
		puts("Digite o preço: ");
		printf("R$ ");
		scanf("%f", &p);
		if(p <= 0)
			puts("**Preço inválido.**");
	}while(p <= 0);
	return p;
}

int levalidaTipo(){
	int t;
	do{
		puts("Digite o tipo do produto: ");
		puts("1 - Bebida");
		puts("2 - Prato");
		puts("3 - Vinho");
		scanf("%i", &t);
		if(t < 1 || t > 3)
			puts("**Opção inválida.**");
	}while(t < 1 || t > 3);
	return t;
}
