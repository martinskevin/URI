#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	double A, B, Aumento;
	
	scanf("%lf%lf", &A, &B);
	Aumento = ((B-A)*100.00)/A;
	printf("%.2lf%%\n", Aumento);
	
	return 0;
}