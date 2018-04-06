#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	int N;
	int A, B;
	int jogadorA, jogadorB;

	while(1){
		scanf("%d", &N);
		if(N == 0)
			break;
		jogadorA = 0;
		jogadorB = 0;

		while(N>0){
			scanf("%d", &A);
			scanf("%d", &B);
			if(A > B)
				jogadorA++;
			else if(B > A)
				jogadorB++;

			N--;
		}
		printf("%d %d\n", jogadorA, jogadorB);	
	}
}