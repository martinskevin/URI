#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	int linha, coluna;
	int i, j;
	int GeralColouNoRole;

	while(1){
		GeralColouNoRole = 0;

		scanf("%d %d", &coluna, &linha);
		if(coluna == 0 && linha == 0)
			break;
		int vetor[linha][coluna];

		for(i=0; i<linha; i++){
			for(j=0; j<coluna; j++){
				scanf("%d", &vetor[i][j]);
			}
		}

		for(i=0; i<coluna; i++){
			GeralColouNoRole = 0;
			for(j=0; j<linha; j++){
				GeralColouNoRole += vetor[j][i];
			}
			if(GeralColouNoRole == linha){
				break;
			}
			GeralColouNoRole = 0;
		}

		GeralColouNoRole ? puts("yes") : puts("no");


	}
	
}