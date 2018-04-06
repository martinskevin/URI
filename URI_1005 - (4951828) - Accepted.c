#include <stdio.h>

int main()

{
	double Media, A, B;
	
	scanf("%lf %lf", &A, &B);
	
	Media = (A * 3.5 + B * 7.5) / 11;
	
	printf("MEDIA = %.5lf\n", Media);
	
	return 0;
}