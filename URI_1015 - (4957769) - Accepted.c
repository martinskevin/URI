#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	double X1, Y1, X2, Y2, Distancia;
	
	scanf("%lf %lf %lf %lf", &X1, &Y1, &X2, &Y2);
	
	Distancia = pow(X2 - X1, 2) + pow(Y2 - Y1, 2);
	Distancia = sqrt(Distancia);
	
	printf("%.4lf\n", Distancia);
	
	return 0;
}