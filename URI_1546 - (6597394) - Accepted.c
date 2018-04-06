#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	int N, M, O;
	scanf("%d", &N);
	while(N>0){
		scanf("%d", &M);
		while(M>0){
			scanf("%d", &O);
			if(O == 1)
				printf("Rolien\n");
			else if(O == 2)
				printf("Naej\n");
			else if(O == 3)
				printf("Elehcim\n");
			else
				printf("Odranoel\n");
			M--;
		}
		N--;
	}

	return 0;	
}