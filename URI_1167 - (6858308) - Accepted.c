#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct RegCriancas{
	char nome[50];
	int valor;
	struct RegCriancas *ant;
	struct RegCriancas *prox;	
};
typedef struct RegCriancas Crianca;

typedef enum{
	false, true
}bool;

Crianca *recebeLista(int numRegs){
	Crianca *inicio = NULL, *atual, *ant2;
	int i;

	for(i = 0; i < numRegs; i++){
		atual = (Crianca *)malloc(sizeof(Crianca));

		scanf(" %s %hd", atual->nome, &atual->valor);

		if(inicio == NULL)
			inicio = atual;
		else {
			ant2->prox = atual;
			atual->ant = ant2;
		}

		ant2 = atual;
	}

	inicio->ant = atual;
	atual->prox = inicio;

	return inicio;
}

Crianca *excluiReg(Crianca *lista, Crianca *regExclui){
	Crianca *ant2 = regExclui->ant; 
	Crianca *regProx = regExclui->prox;
	
	if(regExclui == lista){
		lista = lista->prox;
		ant2->prox = lista; 	
		lista->ant = regExclui->ant;
	}
	else{
		ant2->prox = regProx;
		regProx->ant = ant2;
	}
	free(regExclui);

	return lista;
}


int main(){
	Crianca *lista, *atual, *aux;
	short quantCriancas, valor;
	int i;
	bool par;

	while(scanf("%hd" , &quantCriancas) && quantCriancas){
		lista = recebeLista(quantCriancas);
		aux = lista;
		valor = aux->valor;
		(valor % 2 == 0) ? (par = true) : (par = false);
		
		while(aux != aux->prox && aux != aux->ant){
			atual = aux;
			if(par)
				while(valor--)
					atual = atual->ant;
			else
				while(valor--)
					atual = atual->prox;			
			valor = atual->valor;
			if(valor % 2 == 0){
			 	par = true;
			 	aux = atual->ant;
			}else{
			 	par = false;
			 	aux = atual->prox;
			}
			valor--;
			
			lista = excluiReg(lista, atual);
		}

		printf("Vencedor(a): %s\n", lista->nome);	
	}	
	
	return 0;
}