#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	int N, dias;
	double comida;

	scanf("%d", &N);
	while(N>0){
		dias = 0;
		scanf("%lf", &comida);
		while(comida > 1.0){
			comida /= 2.0;
			dias++;
		}
		printf("%d dias\n", dias);
		N--;
	}
	
}