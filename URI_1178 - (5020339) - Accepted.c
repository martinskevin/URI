#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	double Num[100], Y, Numero;
	int I;
	
	scanf("%lf", &Numero);
	
	for (I=0; I<=99; I++)
	{	
		Num[I] = Numero;
		printf("N[%d] = %.4lf\n", I, Num[I]);
		Numero = Numero / 2.0;
	}
	
	return 0;
}