struct dados{
	int codigo;
	char nome[25];
	char descricao[50];
	float preco;
	int tipo; //1 -bebida  2-comida  3-vinho
};
typedef struct dados dados;

struct lista{
	dados info;
	struct lista *prox;
};
typedef struct lista lista;
