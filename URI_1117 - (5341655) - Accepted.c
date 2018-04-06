#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int i=0;
	float Nota, Media=0;
	
	while(i<2){
		scanf("%f", &Nota);
		if(Nota >= 0 && Nota <= 10){
			Media += Nota;
			i++;
		}
		else
			printf("nota invalida\n");
	}
	Media = Media / 2;
	printf("media = %.2f\n", Media);
	
	
	return 0;
}