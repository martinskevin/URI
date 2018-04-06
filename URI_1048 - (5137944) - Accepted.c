#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	double Salario, Reajuste, Percentual;
	scanf("%lf", &Salario);
	
	if(Salario<=400.00){
		Reajuste = Salario * 0.15;
		Salario += Salario * 0.15;
		Percentual = 15;
	}
	else if(Salario<=800.00){
		Reajuste = Salario * 0.12;
		Salario += Salario * 0.12;
		Percentual = 12;
	}
	else if(Salario<=1200.00){
		Reajuste = Salario * 0.10;
		Salario += Salario * 0.10;
		Percentual = 10;
	}
	else if(Salario<=2000.00){
		Reajuste = Salario * 0.07;
		Salario += Salario * 0.07;
		Percentual = 7;
	}
	else if(Salario > 2000.00){
		Reajuste = Salario * 0.04;
		Salario += Salario * 0.04;
		Percentual = 4;
	}
	
	printf("Novo salario: %.2lf\n", Salario);
	printf("Reajuste ganho: %.2lf\n", Reajuste);
	printf("Em percentual: %.0lf %%\n", Percentual);
	return 0;
}