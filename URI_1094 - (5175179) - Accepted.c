#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	double Teste, Total=0, Coelhos=0, Ratos=0, Sapos=0, N;
	double PCoelhos, PRatos, PSapos;
	char Tipo;
	
	scanf("%lf", &Teste);
	while(Teste>0){
		scanf("%lf", &N);
		scanf("%s", &Tipo);
		if(Tipo == 'C')
			Coelhos += N;
		if(Tipo == 'R')
			Ratos += N;
		if(Tipo == 'S')
			Sapos += N;
		Teste--;
	}
	Total = Sapos + Coelhos + Ratos;
	PCoelhos = (Coelhos * 100.00) / Total;
	PRatos = (Ratos * 100.00) / Total;
	PSapos = (Sapos * 100.00) / Total;
	
	printf("Total: %.0lf cobaias\n", Total);
	printf("Total de coelhos: %.0lf\n", Coelhos);
	printf("Total de ratos: %.0lf\n", Ratos);
	printf("Total de sapos: %.0lf\n", Sapos);
	printf("Percentual de coelhos: %.2lf %%\n", PCoelhos);
	printf("Percentual de ratos: %.2lf %%\n", PRatos);
	printf("Percentual de sapos: %.2lf %%\n", PSapos);
	
	return 0;
}