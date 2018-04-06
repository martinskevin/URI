#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define MAX 55
#define N 55

struct fila {
	int ini, fim;
	int vet[MAX];
};

typedef struct fila Fila;
Fila* cria (void);
void insere (Fila* f, int v);
int retira (Fila* f);
int vazia (Fila* f);
void libera (Fila* f);
int incr (int);


int main(){
	int M, i, aux;

	while(1){
		scanf("%d", &M);
		if(M == 0)
			break;

		Fila* cartas = cria();
		int descartes[M-1];

		for(i=1; i<=M; i++){
			insere(cartas, i);
		}

		for(i=1; i<M; i++){
			descartes[i-1] = retira(cartas);
			aux = retira(cartas);
			insere(cartas, aux);
		}
		aux = retira(cartas);
		
		printf("Discarded cards:");
		for(i=0; i<M-2; i++){
			printf(" %d,", descartes[i]);
		}
		printf(" %d\n", descartes[i]);
		printf("Remaining card: %d\n", aux);
	}
	
	return 0;
}


int incr (int i)
{
	if (i == N-1)
		return 0;
	else
		return i+1;
}

Fila* cria (void)
{
	Fila* f = (Fila*) malloc(sizeof(Fila));
	f->ini = f->fim = 0;
	return f;
}

void insere (Fila* f, int v)
{
	if (incr(f->fim) == f->ini)
		exit(1);
	f->vet[f->fim] = v;
	f->fim = incr(f->fim);
}

int retira (Fila* f)
{
	int v;
	if (vazia(f))
		exit(1);
	v = f->vet[f->ini];
	f->ini = incr(f->ini);
	return v;
}

int vazia (Fila* f)
{
	return (f->ini == f->fim);
}

void libera (Fila* f)
{
	free(f);
}