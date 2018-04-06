#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int N, Cont, Menor, Posicao;
	scanf("%i", &N);
	int X[N];
	
	for(Cont=0; Cont<N; Cont++){
		scanf("%i", &X[Cont]);
	}
	Menor = X[0];
	
	for(Cont=1; Cont<N; Cont++){
		if(Menor>X[Cont]){
			Menor = X[Cont];
			Posicao = Cont;
		}
		
	}
	printf("Menor valor: %i\n", Menor);
	printf("Posicao: %i\n", Posicao);
	
	return 0;
}