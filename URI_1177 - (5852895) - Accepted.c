#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int T, N[1000];
	int i, j=0;
	scanf("%d", &T);
	for(i=0; i<1000; i++){
		if(j == T)
			j = 0;
		N[i] = j;
		j++;
	}
	for(i=0; i<1000; i++){
		printf("N[%d] = %d\n", i, N[i]);
	}
	return 0;
}