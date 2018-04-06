#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int compara ( const void *p1, const void *p2 )
{ 
	int *i = (int *)p1, *j = (int *)p2;
	if( *i < *j )
		return 1;
	else if( *i == *j )
		return 0;
	else
		return -1;

}

int main(){
	int N, i, j;
	scanf("%d", &N);

	while(N > 0){
		int M;
		scanf("%d", &M);
		int P1[M], P2[M];

		j = 0;

		for(i=0; i<M; i++){
			scanf("%d", &P1[i]);
			P2[i] = P1[i];
		}

		qsort(P1, M, sizeof(int), compara);

		for(i=0; i<M; i++){
			if(P1[i] == P2[i])
				j++;
		}
		printf("%d\n", j);
		N--;
	}
	
	return 0;
}