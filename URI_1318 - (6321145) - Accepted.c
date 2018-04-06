#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	int M, N;
	int i, j, k = 0;
	int copias = 0;

	while(1){
		j = 1;
		scanf("%d %d", &N, &M);
		if(M == 0 && N == 0)
			break;
		int Vetor[M];

		for(i=0; i<M; i++){
			scanf("%d", &Vetor[i]);
		}
		while(j <= N){
			k = 0;
			for(i=0; i<M; i++){
				if(j == Vetor[i])
					k++;
				if(k == 2){
					copias++;
					break;
				}
			}
			
			j++;
		}
		printf("%d\n", copias);
		copias = 0;
	}
}