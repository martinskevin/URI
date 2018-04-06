#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int X, Z, i, j=1;
	
	scanf("%d", &X);
	while(1){
		scanf("%d", &Z);
		if(Z>X)
			break;
	}
	i = X;
	while(X<=Z){
		X += i;
		i++;
		j++;
	}
	printf("%d\n", j);
	
	return 0;
}