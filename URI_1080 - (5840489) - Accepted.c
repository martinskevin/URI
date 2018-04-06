#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define TAM 100
int main()
{
	int Valores[TAM], i;
	int maior, posicao;
	
	for(i=0; i < TAM; i++){
		scanf("%d", &Valores[i]);
	}
	maior = Valores[0];
	posicao = 0;
	for(i=1; i < TAM; i++){
		if(Valores[i] > maior){
			maior = Valores[i];
			posicao = i;
		}
	}
	printf("%d\n%d\n", maior, posicao + 1);
	return 0;
}