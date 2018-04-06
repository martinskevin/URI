#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int N, A=1, B=2, C=3;
	scanf("%d", &N);
	while(N>0){
		printf("%d %d %d PUM\n", A, B, C);
		A += 4;
		B += 4;
		C += 4;
		N--;
	}
	
	return 0;
}