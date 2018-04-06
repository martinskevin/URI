#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	double Valor;
	int  Numero, Nota100, Nota50, Nota20, Nota10, Nota5, Nota2, Moeda100, Moeda50, Moeda25, Moeda10, Moeda5, Moeda1;
	
	scanf ("%lf", &Valor);
	
	Valor = Valor * 100.00;
	Numero = (int) Valor;
	
	Nota100 = Numero / 10000;
	Numero = Numero % 10000;
	Nota50 = Numero / 5000;
	Numero = Numero % 5000;
	Nota20 = Numero / 2000;
	Numero = Numero % 2000;
	Nota10 = Numero / 1000;
	Numero = Numero % 1000;
	Nota5 = Numero / 500;
	Numero = Numero % 500;
	Nota2 = Numero / 200;
	Numero = Numero % 200;
	Moeda100 = Numero / 100;
	Numero = Numero % 100;
	Moeda50 = Numero / 50;
	Numero = Numero % 50;
	Moeda25 = Numero / 25;
	Numero = Numero % 25;
	Moeda10 = Numero / 10;
	Numero = Numero % 10;
	Moeda5 = Numero / 5;
	Numero = Numero % 5;
	Moeda1 = Numero;
	
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", Nota100);
	printf("%d nota(s) de R$ 50.00\n", Nota50);
	printf("%d nota(s) de R$ 20.00\n", Nota20);
	printf("%d nota(s) de R$ 10.00\n", Nota10);
	printf("%d nota(s) de R$ 5.00\n", Nota5);
	printf("%d nota(s) de R$ 2.00\n", Nota2);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", Moeda100);
	printf("%d moeda(s) de R$ 0.50\n", Moeda50);
	printf("%d moeda(s) de R$ 0.25\n", Moeda25);
	printf("%d moeda(s) de R$ 0.10\n", Moeda10);
	printf("%d moeda(s) de R$ 0.05\n", Moeda5);
	printf("%d moeda(s) de R$ 0.01\n", Moeda1);
	
	
	
	return 0;
}