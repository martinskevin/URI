#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int IdadeDias, Dias, Meses, Anos;
	
	scanf("%d", &IdadeDias);
	
	Anos = IdadeDias / 365;
	Meses = (IdadeDias % 365) / 30;
	Dias = (IdadeDias % 365 % 30);
	
	printf("%d ano(s)\n", Anos);
	printf("%d mes(es)\n", Meses);
	printf("%d dia(s)\n", Dias);
	
	return 0;
}