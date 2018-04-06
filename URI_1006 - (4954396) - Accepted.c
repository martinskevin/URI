#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <strings.h>

int main()
{
	double Media, A, B, C;
	
	scanf("%lf %lf %lf", &A, &B, &C);
	
	Media = (A * 2 + B * 3 + C * 5) / 10;
	
	printf("MEDIA = %.1lf\n", Media);
	
	return 0;
}