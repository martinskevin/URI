#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int H, P;
	double Resultado;
	
	scanf("%d %d", &H, &P);
	
	Resultado = (H * 1.0)/(P / 1.0);
	
	printf("%.2lf\n", Resultado);
	
	return 0;
}