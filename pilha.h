#ifndef PILHA_H
#define PILHA_H

#define NAO_ENCONTROU -1
#define ERRO_CHEIA 0
#define SUCESSO 1

typedef int t_chave;

typedef struct t_elemento {
	t_chave chave;
} t_elemento;

typedef struct t_no *t_apontador;
typedef struct t_no {
	t_elemento elemento;
	t_apontador proximo;
} t_no_pilha;

typedef struct {
	t_apontador topo;
} t_pilha;

void criar_pilha(t_pilha *pilha);
int empilhar(t_pilha *pilha, t_elemento elemento);
int desempilhar(t_pilha *pilha);
void limpa_pilha(t_pilha *pilha);

#endif