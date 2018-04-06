#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int Pulo, NumCanos, Cont, Teste=0, Dif;
	scanf("%d %d", &Pulo, &NumCanos);	
	int Porra[NumCanos];

	for(Cont=0; Cont < NumCanos; Cont++)
	{
		scanf("%d", &Porra[Cont]);
	}
	for(Cont=1; Cont<NumCanos; Cont++)
	{
		if (Porra[Cont]>Porra[Cont - 1])
			Dif = (Porra[Cont] - Porra[Cont - 1]);
		else
			Dif = (Porra[Cont - 1]) - Porra[Cont];
		if (Dif <= Pulo)
			Teste++;
	}
	
	if (Teste == NumCanos -1)
		printf("YOU WIN\n");
	else
		printf("GAME OVER\n");
	
	
	return 0;
} 