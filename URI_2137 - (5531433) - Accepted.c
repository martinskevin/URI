#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int N, i, Troca, aux, Livros[1005];
	
	while(scanf("%d", &N) != EOF){
		for(i=0; i<N; i++){
			scanf("%d", &Livros[i]);
		}
		Troca=1;
		while(Troca){
			Troca=0;
			for(i=0; i<N-1; i++){
				if(Livros[i]>Livros[i+1]){
					aux = Livros[i];
					Livros[i] = Livros[i+1];
					Livros[i+1] = aux;
					Troca=1;
				}
			}
		}
		for(i=0; i<N; i++){
			printf("%04d\n", Livros[i]);
		}
		
	}
	
	return 0;
}