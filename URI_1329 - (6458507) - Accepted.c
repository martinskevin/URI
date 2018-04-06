#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	int N;
	int i;
	int maria, joao;
	while(1){
		scanf("%d", &N);
		if(N == 0)
			break;
		int moeda[N];
		maria = 0;
		joao = 0;

		for(i=0; i<N; i++){
			scanf("%d", &moeda[i]);
			if(moeda[i] == 0)
				maria++;
			else
				joao++;
		}
		printf("Mary won %d times and John won %d times\n", maria, joao);
	}
	
}