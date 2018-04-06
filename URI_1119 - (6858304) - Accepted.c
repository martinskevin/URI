#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct RegDesempregados{
	int Desempregados;
	struct RegDesempregados *prox;
	struct RegDesempregados *ant;	
};

typedef enum{
	horario, antihorario
}direcao;

typedef struct RegDesempregados TDesempregado;

TDesempregado *preencheLista(short numRegs){
	TDesempregado *inicio = NULL, *regAtual, *regAnt;
	short int i;

	for(i=1; i<=numRegs; i++){
		regAtual = (TDesempregado *)malloc(sizeof(TDesempregado));

		regAtual->Desempregados = i;

		if(inicio == NULL)
			inicio = regAtual;
		else {
			regAnt->prox = regAtual;
			regAtual->ant = regAnt;
		}

		regAnt = regAtual;
	}

	inicio->ant = regAtual;
	regAtual->prox = inicio;

	return inicio;
}

TDesempregado *excluiReg(TDesempregado *lista, TDesempregado *regExcluir){
	TDesempregado *regAnt = regExcluir->ant; 
	TDesempregado *regProx = regExcluir->prox;
	
	if(regExcluir == lista){
		lista = lista->prox;
		regAnt->prox = lista; 	
		lista->ant = regExcluir->ant;
	}
	else{
		regAnt->prox = regProx;
		regProx->ant = regAnt;
	}
	free(regExcluir);

	return lista;
}

int TotalDes(TDesempregado *lista){
	TDesempregado *regAtual = lista;
	short i;

	for(i=1; lista!=regAtual->prox; i++)
		regAtual = regAtual->prox;

	return i;
}

TDesempregado *percorreLista(TDesempregado *lista, short n, direcao antihorario){
	TDesempregado *regAtual = lista;

	if(antihorario == 0)
		while(--n)
			regAtual = regAtual->prox;
	else
		while(--n)
			regAtual = regAtual->ant;

	return regAtual;
}

int main(){ 
	short int n, k, m; 
	short int i;
	
	TDesempregado *inicio, *oficial1, *oficial2, *aux1, *aux2;

	while(scanf("%hd %hd %hd" , &n, &k, &m) * (n+k+m)){
		inicio = preencheLista(n);
		oficial1 = inicio;
		oficial2 = inicio->ant;
		
		while(TotalDes(inicio) > 2){
			
			oficial1 = percorreLista(oficial1, k, horario);
			oficial2 = percorreLista(oficial2, m, antihorario);

			(oficial1->prox == oficial2) ? (aux1 = oficial2->prox) :
									(aux1 = oficial1->prox);
			(oficial2->ant == oficial1)  ? (aux2 = oficial1->ant) :
									(aux2 = oficial2->ant);

			if(oficial1 == oficial2){
				printf("%3hd,", oficial2->Desempregados);
				inicio = excluiReg(inicio, oficial1);
				
			}else{
				printf("%3hd%3hd,", oficial1->Desempregados, oficial2->Desempregados);
				inicio = excluiReg(inicio, oficial2);
				inicio = excluiReg(inicio, oficial1);
			}

			oficial1 = aux1;
			oficial2 = aux2;
		}

		if(TotalDes(inicio) == 2){
			oficial1 = percorreLista(oficial1, k, horario);
			oficial2 = percorreLista(oficial2, m, antihorario);

			if(oficial1 == oficial2){
				printf("%3hd,%3hd\n", oficial1->Desempregados, oficial1->prox->Desempregados);
			}
			else
				printf("%3hd%3hd\n", oficial1->Desempregados, oficial1->prox->Desempregados);

		}else{
			printf("%3hd\n", inicio->Desempregados);
		}
	}

	return 0;
}