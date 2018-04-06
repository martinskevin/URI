#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int A, B, C, MaiorAB, MaiorFinal;
	
	scanf("%d %d %d", &A, &B, &C);
	
	MaiorAB = (A + B + abs(A - B)) / 2;
	MaiorFinal = (MaiorAB + C + abs(MaiorAB - C)) / 2;
	
	printf("%d eh o maior\n", MaiorFinal);
	
	return 0;
}