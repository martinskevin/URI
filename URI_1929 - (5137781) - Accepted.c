#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int A, B, C, D, Cont=0;
	scanf("%d%d%d%d", &A, &B, &C, &D);
	
	if(A+B>C)
		Cont++;
	if(A+B>D)
		Cont++;
	if(A+C>B)
		Cont++;
	if(A+C>D)
		Cont++;
	if(B+C>A)
		Cont++;
	if(B+C>D)
		Cont++;
	if(B+D>A)
		Cont++;
	if(B+D>C)
		Cont++;
	if(C+D>A)
		Cont++;
	if(C+D>B)
		Cont++;
	if(D+A>B)
		Cont++;
	if(D+A>C)
		Cont++;
		
	if(Cont < 9)
		printf("N\n");
	else
		printf("S\n");
	
	return 0;
}