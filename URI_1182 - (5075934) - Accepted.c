#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int Coluna, Linha, Entrada;
	double M[12][12], Total=0;
	char Tipo;
	
	scanf("%d", &Entrada);
	scanf(" %c", &Tipo);
	
		
	for (Linha = 0; Linha < 12; Linha++)
	{
		for (Coluna = 0; Coluna < 12; Coluna++)
		{
			scanf("%lf", &M[Linha][Coluna]);
			if (Coluna == Entrada)
				Total = Total + M[Linha][Coluna];			
		}
			
	}
	if (Tipo == 'S')
		printf("%.1lf\n", Total);
	else
	{
		if(Tipo == 'M')
		{
			Total = Total / 12.0;
			printf("%.1lf\n", Total);
		}
	}
	
	return 0;
}