#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	double Idade, Cont=0, Media=0;
	
	while(1){
		scanf("%lf", &Idade);
		if(Idade>0){
			Media = Media + Idade;
			Cont++;
		}
		else
			break;
	}
	Media = Media / Cont;
	printf("%.2lf\n", Media);
	
	return 0;
}