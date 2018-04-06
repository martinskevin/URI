#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int Coluna, Linha;
	double M[12][12], Total=0;
	char Tipo;
	
	scanf(" %c", &Tipo);
	
		
	for (Linha = 0; Linha < 12; Linha++)
	{
		for (Coluna = 0; Coluna < 12; Coluna++)
		{
			scanf("%lf", &M[Linha][Coluna]);
			if (Coluna<Linha && Linha > 5 && Coluna + Linha > 11)
			{
				Total = Total + M[Linha][Coluna];
			}
		}
			
	}
	if (Tipo == 'S')
		printf("%.1lf\n", Total);
	else
	{
		if(Tipo == 'M')
		{
			Total = Total / 30.0;
			printf("%.1lf\n", Total);
		}
	}
	
	return 0;
}