#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int Numero, Valor, Nota100, Nota50, Nota20, Nota10, Nota5, Nota2, Nota1;
	
	scanf ("%d", &Numero);
	
	Valor = Numero;
	Nota100 = Numero / 100;
	Numero = Numero % 100;
	Nota50 = Numero / 50;
	Numero = Numero % 50;
	Nota20 = Numero / 20;
	Numero = Numero % 20;
	Nota10 = Numero / 10;
	Numero = Numero % 10;
	Nota5 = Numero / 5;
	Numero = Numero % 5;
	Nota2 = Numero / 2;
	Numero = Numero % 2;
	Nota1 = Numero;
	
	printf("%d\n", Valor);
	printf("%d nota(s) de R$ 100,00\n", Nota100);
	printf("%d nota(s) de R$ 50,00\n", Nota50);
	printf("%d nota(s) de R$ 20,00\n", Nota20);
	printf("%d nota(s) de R$ 10,00\n", Nota10);
	printf("%d nota(s) de R$ 5,00\n", Nota5);
	printf("%d nota(s) de R$ 2,00\n", Nota2);
	printf("%d nota(s) de R$ 1,00\n", Nota1);
	
	return 0;
}