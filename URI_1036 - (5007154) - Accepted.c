#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	double A, B, C, Delta, Raiz1, Raiz2;
	
	scanf("%lf %lf %lf", &A, &B, &C);
	
	if (A == 0)
		printf("Impossivel calcular\n");
	else
	{
		Delta = pow(B, 2) - 4.0 * A * C;
	
		if (Delta < 0)
			printf("Impossivel calcular\n");
		else
		{
			B = B * (-1.0);
			Raiz1 = (B + sqrt(Delta)) / (2.0 * A);
			Raiz2 = (B - sqrt(Delta)) / (2.0 * A);
			printf("R1 = %.5lf\nR2 = %.5lf\n", Raiz1, Raiz2);
		}
	}
	
		
	return 0;
}