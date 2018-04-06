#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int Tomada, Aparelhos=0, Cont;
	
	for(Cont=0; Cont<4; Cont++){
		scanf("%i", &Tomada);
		Aparelhos += Tomada;
	}
	Aparelhos -= 3;
	printf("%i\n", Aparelhos);
	
	return 0;
}