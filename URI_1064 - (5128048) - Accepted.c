#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	double Numero, Media=0, Positivos=0;
	int  Cont=0;
	
	while (Cont<6){
		scanf("%lf", &Numero);
		if(Numero>0){
			Positivos += 1;
			Media += Numero;
		}
		Cont++;
	}
	Media = Media / Positivos;
	printf("%.0lf valores positivos\n", Positivos);
	printf("%.1lf\n", Media);
	return 0;
}