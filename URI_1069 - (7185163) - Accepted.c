#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define MAX 1003

struct pilha {
    int n;
    char vet[MAX];
};

typedef struct pilha Pilha;

Pilha* cria (void);
void push (Pilha* p, char v);
char pop (Pilha*);
int vazia (Pilha* p);
void libera (Pilha* p);


int main(){
	int N, i;
	char minerio[MAX], saida;

	scanf("%d", &N);
	while(N>0){
		
		Pilha* diamante = cria();
		int diamantes = 0;
		scanf("%s", minerio);

		for(i=0; minerio[i] != '\0'; i++){
			if(minerio[i] == '<')
				push(diamante, '<');
			else if(minerio[i] == '>'){
				saida = pop(diamante);
				if(saida == '<')
					diamantes++;
			}
		}
		libera(diamante);
		printf("%d\n", diamantes);
		N--;
	}
    return 0;
}


Pilha* cria (void)
{
	Pilha* p = (Pilha*) malloc(sizeof(Pilha));
	p->n = 0;
	return p;
}

void push (Pilha* p, char v)
{
	p->vet[p->n] = v;
	p->n++;
}

char pop (Pilha* p)
{
	char v;
	if(vazia(p)){
		v = 'x';
		return v;
	}
	v = p->vet[p->n-1];
	p->n--;
	return v;
}

int vazia (Pilha* p)
{
	return (p->n == 0);
}

void libera (Pilha* p)
{
	free(p);
}