#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int Cont; 
	float S = 0.0, D = 1.0;
	
	for (Cont=0; Cont<=99; Cont++)
	{
		S = S + (1.0 / D);
		D = D + 1.0;
	}
	printf("%.2f\n", S);
	
	return 0;
}