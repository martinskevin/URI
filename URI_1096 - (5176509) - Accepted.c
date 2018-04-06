#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int I=1, J=7;
	while(I<=9){
		while(J>=5){
			printf("I=%d J=%d\n", I, J);
			J--;
		}
		I = I + 2;
		J = 7;
	}
	
	return 0;
}