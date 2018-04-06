#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int A, B, C;
	
	scanf("%d %d %d", &A, &B, &C);
	
	if (A < B && B < C)
		printf("%d\n%d\n%d\n\n", A, B, C);
	if (A < C && C < B)
		printf("%d\n%d\n%d\n\n", A, C, B);
	if (B < A && A < C)
		printf("%d\n%d\n%d\n\n", B, A, C);
	if (B < C && C < A)
		printf("%d\n%d\n%d\n\n", B, C, A);
	if (C < A && A < B)
		printf("%d\n%d\n%d\n\n", C, A, B);
	if (C < B && B < A)
		printf("%d\n%d\n%d\n\n", C, B, A);
	
	printf("%d\n%d\n%d\n", A, B, C);
	
	return 0;
}