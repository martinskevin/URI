#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int A, B, C, D, Dif;
	
	scanf("%d %d %d %d", &A, &B, &C, &D);
	
	Dif = A * B - C * D;
	
	printf("DIFERENCA = %d\n", Dif);
	
	return 0;
}