#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int A, N;
	int Soma=0;
	scanf("%d", &A);
	while(1){
		scanf("%d", &N);
		if(N>0)
			break;
	}
	while(N>0){
		Soma += A;
		N--;
		A++;
	}
	printf("%d\n", Soma);
	
	return 0;
}