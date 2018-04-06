#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define TAM 100000

int main()
{
	int colunas, numeros, vetor[TAM];
	int i, j;
	scanf("%d %d", &colunas, &numeros);
	for(i=1; i <= numeros; i++){
		vetor[i-1] = i;
	}
	j = colunas;
	for(i=0; i < numeros; i++){
		if(i != j - 1)
			printf("%d ", vetor[i]);
		else{
			printf("%d\n", vetor[i]);
			j += colunas;
		}
		
	}
	return 0;
}