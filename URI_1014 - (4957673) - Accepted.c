#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int Km;
	float Gas, Consumo;
	
	scanf("%d %f", &Km, &Gas);
	
	Consumo = Km / Gas;
	
	printf("%.3f km/l\n", Consumo);
	
	return 0;
}