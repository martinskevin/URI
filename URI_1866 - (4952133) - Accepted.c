#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <strings.h>

int main()
{
	int Cont, Resultado, C, N;
	
	scanf("%d", &C);
	
	for (Cont=1; Cont<=C; Cont++)
	{	
	scanf("%d", &N);
	
		if (N % 2 == 0)
			Resultado = 0;
		else
			Resultado = 1;
	
	printf("%d\n", Resultado);
	
	}
	
	
	
	return 0;
}