#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int X, Y, N;
	double Z;
	scanf("%d", &N);
	while(N>0){
		scanf("%d %d", &X, &Y);
		if(Y!=0){
			Z = 1.00 * X / Y;
			printf("%.1lf\n", Z);
		}
		else
			printf("divisao impossivel\n");
		N--;
	}
	return 0;
}