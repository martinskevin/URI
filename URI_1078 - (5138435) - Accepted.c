#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int N, Mult, Cont;
	scanf("%d", &N);
	for(Cont=1; Cont<11; Cont++){
		Mult = Cont*N;
		printf("%d x %d = %d\n", Cont, N, Mult);
	}
	
	
	return 0;
}