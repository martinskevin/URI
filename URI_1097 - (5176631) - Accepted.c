#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int I=1, J=7, X=5;
	while(I<=9){
		while(J>=X){
			printf("I=%d J=%d\n", I, J);
			J--;
		}
		I = I + 2;
		J = J + 5;
		X = X + 2;
	}
	
	return 0;
}