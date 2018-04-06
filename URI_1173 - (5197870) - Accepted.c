#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int V, C = 0, Cont, N[11];
	scanf("%d", &V);
	N[0] = V;
	printf("N[%d] = %d\n", C, N[0]);
	C++;
	for(Cont=1; Cont<10; Cont++){
		N[Cont] = N[Cont-1] * 2;
		printf("N[%d] = %d\n", C, N[Cont]);
		C++;
	}
	
	
	
	return 0;
}