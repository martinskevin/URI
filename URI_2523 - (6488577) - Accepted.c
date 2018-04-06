#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	char mensagem[30];
	int N, i, j;
	while(scanf("%s", mensagem) != EOF){
		scanf("%d", &N);
		int posicao[N];

		for(i=0; i<N; i++){
			scanf("%d", &posicao[i]);
		}
		for(i=0; i<N; i++){
			j = posicao[i];
			printf("%c", mensagem[j - 1]);
		}printf("\n");
	}

	return 0;	
}