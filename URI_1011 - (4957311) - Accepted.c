#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	double Raio, Volume;
	
	scanf("%lf", &Raio);
	
	Volume = (4.0 / 3) * 3.14159 * pow (Raio, 3);
	
	printf("VOLUME = %.3lf\n", Volume);
	
	return 0;
}