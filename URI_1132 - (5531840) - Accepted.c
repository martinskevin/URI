#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int X, Y, aux=0, Soma=0;
	scanf("%d %d", &X, &Y);
	if(X>Y){
		aux = Y;
		Y = X;
		X = aux;
	}
	while(X<=Y){
		if((X%13)!=0){
			Soma+= X;
		}
		X++;
	}
	printf("%d\n", Soma);
	return 0;
}