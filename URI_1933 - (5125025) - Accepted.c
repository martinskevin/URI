#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int A, B, Carta;
	
	scanf("%d%d", &A, &B);
	
	if(A == B){
		Carta = A;
	}
	else if (A < B){
		Carta = B;
	}
	else if(B < A){
		Carta = A;
	}
	printf("%d\n", Carta);
	return 0;
}