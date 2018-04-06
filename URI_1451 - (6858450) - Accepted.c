#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct RegLista {
	char letra;
	struct RegLista *prox;
};

typedef struct RegLista Listas;

struct RegDescritor {
	Listas *inicio, *aux, *final;
};

typedef struct RegDescritor Descritor;

void inicializaLista (Descritor *RegLista)
{
	RegLista->inicio = NULL;
	RegLista->aux = NULL;
	RegLista->final = NULL;
}

void insereEsquerda (Descritor *RegLista, char letra)
{
	Listas *novo = (Listas *) malloc(sizeof(Listas));
	
	novo->letra = letra;
	novo->prox = NULL;
	
	if (RegLista->inicio == NULL) 
		RegLista->inicio = novo;
	else						
		RegLista->final->prox = novo;
	
	RegLista->final = novo;
}

void insereDireita (Descritor *RegLista, char letra)
{
	Listas *novo = (Listas *) malloc(sizeof(Listas));
	Listas *ant = NULL;
	Listas *p = RegLista->inicio;
	
	novo->letra = letra;
	novo->prox = NULL;
	
	while (p != NULL && p != RegLista->aux)
	{
		ant = p;
		p = p->prox;
	}
	
	if (p == NULL)
	{
		RegLista->inicio = novo;
		
		Listas *gambiarra = (Listas *) malloc(sizeof(Listas));
		gambiarra->letra = '{';
		gambiarra->prox = NULL;
		
		novo->prox = gambiarra;
		RegLista->aux = gambiarra;
		RegLista->final = gambiarra;
	}
	else
	{
		if (ant == NULL)
		{
			novo->prox = RegLista->aux;
			RegLista->inicio = novo;
		}
		else
		{
			novo->prox = ant->prox;
			ant->prox = novo;
		}
	}
}

void imprimeLista (Descritor *RegLista)
{
	Listas *p;
	for (p = RegLista->inicio; p != NULL; p = p->prox)
		printf("%c", p->letra);
}

void liberaLista (Descritor *RegLista)
{
	Listas *p = RegLista->inicio;
	
	while (p != NULL)
	{
		Listas *t = p->prox;
		free(p);
		p = t;
	}
}

void excluiLista(Descritor *RegLista, char letra)
{
	Listas *p, *ant;
	
	p = RegLista->inicio;
	ant = NULL;
	
	while (p != NULL && p->letra != letra)
	{	
		ant = p;
		p = p->prox;
	}
	
	if (p != NULL)
	{
		if (ant == NULL)
			RegLista->inicio = p->prox;
		else
			ant->prox = p->prox;
		
		free(p);
	}
}

int main()
{
	Descritor RegLista;
	char texto[100003];
	int i, posicao, primeiro;
	long int tamanho;
	
	while(fgets(texto, 100003, stdin))
	{
		inicializaLista(&RegLista);
		posicao = 0;
		tamanho = strlen(texto);
		
		for(i=0; i<tamanho; i++)
		{
			if(texto[i] == '[')
			{
				posicao = 1;
				RegLista.aux = RegLista.inicio;
				primeiro = 0;
				continue;
			}
			else if(texto[i] == ']')
			{
				posicao = 0;
				continue;
			}
			else if(texto[i] == '\n')
			{
				continue;
			}
			else if(texto[i] == '\r')
			{
				continue;
			}
			
			if(posicao == 0)
				insereEsquerda(&RegLista, texto[i]);
			else
				insereDireita(&RegLista, texto[i]);
		}
		
		excluiLista(&RegLista, '{');
		imprimeLista(&RegLista);
		printf("\n");
		liberaLista(&RegLista);
	}
	
	return 0;
}

