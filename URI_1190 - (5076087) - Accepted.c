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
			if (Coluna > 6 && Coluna + Linha >= 12 && Coluna > Linha)
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
			Total = Total / 66.0;
			printf("%.1lf\n", Total);
		}
	}
	
	return 0;
}