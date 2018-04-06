#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	int i, M, N;

	scanf("%d", &i);

	while(i>0){
		scanf("%d %d", &M, &N);

		printf("%d\n", M + N);

		i--;
	}
	
}