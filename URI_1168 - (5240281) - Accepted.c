#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	char valor[10000];
	int N, Cont, Leds=0;
	
	scanf("%d", &N);
	while(N>0){
		scanf("%s", valor);
		for(Cont=0; Cont<strlen(valor); Cont++){
			if(valor[Cont] == '1')
				Leds += 2;
			if(valor[Cont] == '2')
				Leds += 5;
			if(valor[Cont] == '3')
				Leds += 5;
			if(valor[Cont] == '4')
				Leds += 4;
			if(valor[Cont] == '5')
				Leds += 5;
			if(valor[Cont] == '6')
				Leds += 6;
			if(valor[Cont] == '7')
				Leds += 3;
			if(valor[Cont] == '8')
				Leds += 7;
			if(valor[Cont] == '9')
				Leds += 6;
			if(valor[Cont] == '0')
				Leds += 6;
		}
		printf("%d leds\n", Leds);
		N--;
		Leds = 0;
	}
	
	return 0;
}