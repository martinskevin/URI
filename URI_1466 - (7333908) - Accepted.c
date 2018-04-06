#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h> 
#include <stddef.h>

#define DESLOC "   "

int i = 0;

typedef struct tree {
		int item;
		struct tree *left;
		struct tree * right;
		int nivel;
}tree;

typedef struct pilha{
		int item;
		int nivel;
}pilha;

void aloca (int vetor2[], int a, pilha vetor1[]);
int compara(const void *a, const void *b);
void ImprimeArvore(tree *r, pilha PA[], int n);
void ImprimePilha (pilha PA[], int n);

int main (){

	int n, a, b, cont = 1;
	scanf("%d", &n);
	
	for(; cont <= n; cont++){
		scanf("%d", &a);
		int vetor2[a];
		pilha vetor1[a];
		b = a;		
		
		for(;a--;)
			scanf("%d", &vetor2[a]);
		
		printf("Case %d:\n", cont);
		aloca(vetor2, b, vetor1);
		i = 0;
	}

return 0;
}

int compara(const void *a, const void *b)
{
	pilha *i = (pilha*) a, *j = (pilha*)b;
	
	if(i->nivel == j->nivel){
		return i->item - j->item;
	}else 
		return i->nivel - j->nivel;
}


void ImprimeArvore(tree *r, pilha PA[], int n)
{	
	if(r != NULL)
	{
		if(r->left) ImprimeArvore(r->left,PA,n);
		if(r->right) ImprimeArvore(r->right,PA,n);
		PA[i].item = r->item;
		PA[i].nivel = r->nivel;
		i++;	
	}
	else return;
}
void ImprimePilha (pilha PA[], int n)
{	
	int flag = 0;
	int a = 0;
	
	qsort(PA,n,sizeof(pilha),compara);
	
	for(;a<i;a++){
		if(flag == 0){ printf("%d", PA[a].item);
		flag++;		}		
		else printf(" %d", PA[a].item);	
	}

}
void aloca (int vetor2[], int a, pilha vetor1[]){
	int n = a, pilha[n];
	
	tree *root = NULL;
	tree *aux1 = NULL,*aux2 = NULL, *ant = NULL;
	for(;a--;){	
		if(root == NULL){
			aux1 = (tree*) malloc(sizeof(tree));
			aux1->left = NULL;
			aux1->right = NULL;
			aux1->item = vetor2[a];
			root = aux1;
			ant = aux1;
			aux1->nivel = 0;
		}
		else{
			aux2 = root;
			while(aux2 != NULL){
				if(vetor2[a] > aux2->item){
					ant = aux2;
					aux2 = aux2->right;
				}
				else{
					ant = aux2;
					aux2 = aux2->left;
				}
			}
			
			aux1 = (tree*) malloc(sizeof(tree));
			aux1->left = NULL;
			aux1->right = NULL;
			aux1->item = vetor2[a];
			aux1->nivel = ant->nivel + 1;
		
			if(vetor2[a] > ant->item) 
				ant->right = aux1;
			else	 
				ant->left = aux1;
		}
		
	}
	
	ImprimeArvore(root,vetor1,n);
	ImprimePilha(vetor1,n);
	puts("");
	puts("");
	
}

