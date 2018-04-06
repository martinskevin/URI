#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int X;
	int i;
	
	scanf("%d", &X);
	for(i=1; i<=X; i++){
		if((X%i)==0)
			printf("%d\n", i);
	}
	
	return 0;
}