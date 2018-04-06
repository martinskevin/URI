#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct MinhaVara{int tamanho, quant;};

int Retangulinhos(struct MinhaVara *, int);

int main()
{
	int N, i;	

	while(scanf("%d", &N) && N != 0){
		struct MinhaVara Vara[1000];
		
		for(i=0; i<N; i++){
			scanf("%d %d", &Vara[i].tamanho, &Vara[i].quant);
		}
		printf("%d\n", Retangulinhos(Vara, N));
	}
	
	return 0;
}

int Retangulinhos(struct MinhaVara *VarinhaMagica, int N){
	int i;
	long retangulinhos = 0;
	for(i=0; i<N; i++){
		if(VarinhaMagica[i].quant % 2 != 0){
			VarinhaMagica[i].quant--;
		}
		retangulinhos += VarinhaMagica[i].quant;
	}
	return retangulinhos / 4;
}