#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	float A[105];
	int i;
	for(i=0; i<100; i++){
		scanf("%f", &A[i]);
		if(A[i] <= 10){
			printf("A[%d] = %.1f\n", i, A[i]);
		}
	}	
	
	return 0;
}