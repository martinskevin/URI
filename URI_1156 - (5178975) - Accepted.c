#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	double S=0, X=1, Y=1;
	while(X <= 39){
		S = S + (X / Y);
		X += 2;
		Y = Y * 2;
	}
	printf("%.2lf\n", S);
	
	return 0;
}