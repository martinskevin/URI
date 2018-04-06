#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int X, Cont=0;
	
	scanf("%d", &X);
	if((X / 2) != 0){
		X += 1;	
		}
	while(Cont<6){
		printf("%d\n", X);
		X += 2;
		Cont++;
	}
	
	return 0;
}