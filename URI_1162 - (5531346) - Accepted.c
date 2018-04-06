#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int i, j, Troca, aux=0, N, L;
	int Trem[60];
	
	scanf("%d", &N);
	while(N>0){
		Troca = 1;
		j=0;
		scanf("%d", &L);
		for(i=0; i<L; i++){
			scanf("%d", &Trem[i]);
		}
		while(Troca == 1){
			Troca = 0;
			for(i=0; i<L-1; i++){
				if(Trem[i]>Trem[i+1]){
					aux = Trem[i];
					Trem[i] = Trem[i+1];
					Trem[i+1] = aux;
					j++;
					Troca = 1;
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n", j);
		N--;
	}
	
	return 0;
}