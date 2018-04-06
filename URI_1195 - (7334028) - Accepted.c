#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h> 
#include <stddef.h>

typedef struct tree {
		int item;
		struct tree *esq;
		struct tree * dir;
}tree;

void ImprimeArvorePre(tree *r);
void ImprimeArvorePos(tree *r);
void ImprimeArvoreIn(int vetor[],int n);
void LiberaArvore (tree *r);
void aloca (int vetor[], int a);
int compara(const void *a, const void *b);

int main (){

	int n, a, b, cont = 1;
	scanf("%d", &n);
	
	for(; cont<=n; cont++){
		scanf("%d", &a);
		int vetor[a];
		b = a;		
		for(;a--;){
			scanf("%d", &vetor[a]);
		}
		printf("Case %d:\n", cont);
		aloca(vetor, b);
	}

return 0;
}

int compara(const void *a, const void *b){
	return (*(int*)b - *(int*)a);
}

void ImprimeArvorePre(tree *r)
{	

	if (r != NULL)
	{
		printf(" %d", r->item);
		if(r->esq) ImprimeArvorePre(r->esq);
		if(r->dir) ImprimeArvorePre(r->dir);
	}
	else return;
}
void ImprimeArvorePos(tree *r)
{	

	if (r != NULL)
	{
		if(r->esq) ImprimeArvorePos(r->esq);
		if(r->dir) ImprimeArvorePos(r->dir);
		printf(" %d", r->item);
			
	}
	else return;
}
void ImprimeArvoreIn(int vetor[],int n)
{	
	qsort(vetor,n,sizeof(int),compara);
	
	for(;n--;){
		printf(" %d",vetor[n]);
	}	

}
void LiberaArvore (tree *r){
	
	if(r != NULL){
		if(r->esq) ImprimeArvorePos(r->esq);
		if(r->dir) ImprimeArvorePos(r->dir);
		free(r);
	}

}
void aloca (int vetor[], int a){
	int n = a;
	tree *raiz = NULL;
	tree *aux1 = NULL,*aux2 = NULL, *ant = NULL;
	
	for(;a--;){	
		if(raiz == NULL){
			aux1 = (tree*) malloc(sizeof(tree));
			aux1->esq = NULL;
			aux1->dir = NULL;
			aux1->item = vetor[a];
			raiz = aux1;
			ant = aux1;
		}
		else{
			aux2 = raiz;
			while(aux2 != NULL){
				if(vetor[a] > aux2->item){
					ant = aux2;
					aux2 = aux2->dir;
				}
				else{
					ant = aux2;
					aux2 = aux2->esq;
				}
			}
			aux1 = (tree*) malloc(sizeof(tree));
			aux1->esq = NULL;
			aux1->dir = NULL;
			aux1->item = vetor[a];
		
			if(vetor[a] > ant->item) 
				ant->dir = aux1;
			else 
				ant->esq = aux1;
		}
		
	}
	printf("Pre.:");
	ImprimeArvorePre(raiz);
	printf("\nIn..:");
	ImprimeArvoreIn(vetor,n);
	printf("\nPost:");
	ImprimeArvorePos(raiz);
	puts("");
	puts("");

}
