#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int Hora1, Hora2, Tempo;
	
	scanf("%d%d", &Hora1, &Hora2);
	
	if (Hora1 > Hora2)
		Tempo = (24 - Hora1) + Hora2;
	if (Hora2 > Hora1)
		Tempo = Hora2 - Hora1;
	if (Hora1 == Hora2)
		Tempo = 24;
	
	printf("O JOGO DUROU %d HORA(S)\n", Tempo);
	
	return 0;
}