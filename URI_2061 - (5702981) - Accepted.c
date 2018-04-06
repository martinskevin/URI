#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int N, M;
	char A[10];
	
	scanf("%d %d", &N, &M);
	while(M>0){
		scanf("%s", A);
		if(strcmp(A, "fechou") == 0)
			N++;
		else 
			N--;
		M--;
	}
	printf("%d\n", N);
	
	return 0;
}