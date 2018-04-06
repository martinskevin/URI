#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct{
	char id;
	unsigned short int tempo;
	char julgamento[15];
} Subs;

int main(){
	unsigned short int N, i, j;
	int resolvidos, total, aux;
	char alfabeto[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'X', 'W', 'Y', 'Z'};
	
	while(1){
		resolvidos = 0;
		
		scanf("%hd", &N);
		if(N == 0)
			break;
		Subs submit[N];

		for(i=0; i<N; i++){
			scanf(" %c %hd %s", &submit[i].id, &submit[i].tempo, submit[i].julgamento);
		}
		total = 0;
		for(j=0; j<26; j++){
			aux = 0;
			for(i=0; i<N; i++){
				if(alfabeto[j] == submit[i].id && strcmp(submit[i].julgamento, "incorrect") == 0){
					aux += 20;
				}
				if(alfabeto[j] == submit[i].id && strcmp(submit[i].julgamento, "correct") == 0){
					aux += submit[i].tempo;
					resolvidos++;
					total += aux;
				}
			}
		}
		printf("%d %d\n", resolvidos, total);
	}

	return 0;	
}