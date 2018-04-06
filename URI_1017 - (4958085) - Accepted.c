#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int Tempo, Velocidade, Distancia;
	float Litros;
	
	scanf("%d %d", &Tempo, &Velocidade);
	
	Distancia = Tempo * Velocidade;
	Litros = Distancia / 12.0;
	
	printf("%.3f\n", Litros);	
	
	return 0;
}