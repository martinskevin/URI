#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int N;
	int X, Y, Soma;
	int i;
	scanf("%d", &N);
	while(N>0){
		Soma = 0;
		scanf("%d %d", &X, &Y);
		for(i=0; i<Y; i++){
			if((X%2)==0)
				X++;
			Soma += X;
			X+=2;
		}
		printf("%d\n", Soma);
		
		N--;
	}
	
	return 0;
}