#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	double Numero;
	
	scanf("%lf", &Numero);
	
	if (Numero < 0 || Numero > 100)
		printf("Fora de intervalo\n");
	else
	{
		if (Numero >= 0 && Numero <= 25)
			printf("Intervalo [0,25]\n");
		if (Numero > 25 && Numero <= 50)
			printf("Intervalo (25,50]\n");
		if (Numero > 50 && Numero <= 75)
			printf("Intervalo (50,75]\n");
		if (Numero > 75 && Numero <= 100)
			printf("Intervalo (75,100]\n");
	}
		
	return 0;
}