lista *inserir(lista *l, dados d){
	lista *no;
	no = (lista *)malloc(sizeof(lista));
	no->info = d;
	no->prox = l;
	return no;
}

