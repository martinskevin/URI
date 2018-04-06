#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int N, A=1, B=1, C=1;
	scanf("%d", &N);
	while(N>0){
		printf("%d %d %d\n", A, B, C);
		A++;
		B = A*A;
		C = A*A*A;
		N--;
	}
	
	return 0;
}