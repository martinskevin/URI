#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	double A, B, C, Triangulo, Circulo, Trapezio, Quadrado, Retangulo;
	
	scanf("%lf %lf %lf", &A, &B, &C);
	
	Triangulo = A * C / 2.0;
	Circulo = pow(C, 2) * 3.14159;
	Trapezio = C * (A + B) / 2.0;
	Quadrado = B * B;
	Retangulo = A * B;
	
	printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", Triangulo, Circulo, Trapezio, Quadrado, Retangulo);
	
	return 0;
}