#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int Codigo, Quantidade;
	float Valor, Total;
	
	scanf("%d %d", &Codigo, &Quantidade);
	
	if (Codigo == 1)
	{
		Valor = 4.00;
		Total = Valor * Quantidade;
	}
	
	if (Codigo == 2)
	{
		Valor = 4.50;
		Total = Valor * Quantidade;
	}
	
	if (Codigo == 3)
	{
		Valor = 5.00;
		Total = Valor * Quantidade;
	}
	
	if (Codigo == 4)
	{
		Valor = 2.00;
		Total = Valor * Quantidade;
	}
	
	if (Codigo == 5)
	{
		Valor = 1.50;
		Total = Valor * Quantidade;
	}
	
	printf("Total: R$ %.2f\n", Total);
	return 0;
}