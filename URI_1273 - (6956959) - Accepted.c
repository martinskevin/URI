#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct Nome{char nome[50];};
typedef struct Nome vNome;

int main(){
	int n, i, aux=0, aux2, aux3=0;

	while(scanf("%d", &n) && n){
		if(aux3 != 0)
			printf("\n");
		aux3++;
		vNome string[n];
		aux = 0;
		for(i=0; i<n; i++){
			scanf(" %s", string[i].nome);
			if(strlen(string[i].nome) > aux)
				aux = strlen(string[i].nome);
		}
		for(i=0; i<n; i++){
			aux2 = aux - strlen(string[i].nome);
			while(aux2){
				printf(" ");
				aux2--;
			}
			printf("%s\n", string[i].nome);
		}
	}
	
	return 0;
}