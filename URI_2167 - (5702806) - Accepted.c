#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int N, R[100];
	int i, j=1;
	
	scanf("%d", &N);
	for(i=0; i<N; i++){
		scanf("%d", &R[i]);
	}
	for(i=1; i<N; i++){
		if(R[i] < R[i-1]){
			printf("%d\n", i+1);
			j=1;
			break;
		}
		else
			j=0;
	}
	if(j==0)
		printf("%d\n", j);
	
	return 0;
}