#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int X, Y, aux=0;
	scanf("%d %d", &X, &Y);
	if(X>Y){
		aux = Y;
		Y = X;
		X = aux;
	}
	while(X<Y){
		X++;
		if(X!=Y &&((X%5)==2 || (X%5)==3))
			printf("%d\n", X);
	}
	
	return 0;
}