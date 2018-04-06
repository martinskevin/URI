#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	long long pontos;
	scanf("%lld", &pontos);
	
	printf("%lld\n", (pontos * (pontos-3)/2));
	
	return 0;
}