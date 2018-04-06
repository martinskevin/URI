#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	float A, B, C, Perimetro, Area;
	
	scanf("%f %f %f", &A, &B, &C);
	
	if (A < B + C && B < A + C && C < A + B)
	{
		Perimetro = A + B + C;
		printf("Perimetro = %.1f\n", Perimetro);
	}	
	else
	{
		Area = (A + B) * C / 2.0;
		printf("Area = %.1f\n", Area);
	}
	return 0;
}