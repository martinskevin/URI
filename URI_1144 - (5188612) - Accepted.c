#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int N, X1=1, X2=1, Cont;
	
	scanf("%d", &N);
	for(Cont=1; Cont <= N; Cont++){
		X1 = Cont * Cont;
		X2 = Cont * X1;
		printf("%d %d %d\n", Cont, X1, X2);
		X1++;
		X2++;
		printf("%d %d %d\n", Cont, X1, X2);
	}
	
	return 0;
}