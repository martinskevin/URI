#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	double Numero;
	int  Positivos=0, Cont=0;
	
	while (Cont<6){
		scanf("%lf", &Numero);
		if(Numero>0){
			Positivos += 1;
		}
		Cont++;
	}
	printf("%d valores positivos\n", Positivos);
	return 0;
}