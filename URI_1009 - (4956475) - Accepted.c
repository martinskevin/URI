#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	char Nome;
	double Salario, Vendas, Total;
	
	scanf("%s %lf %lf", &Nome, &Salario, &Vendas);
	
	Total = Salario + Vendas * 0.15;
	
	printf("TOTAL = R$ %.2lf\n", Total);
	
	return 0;
}