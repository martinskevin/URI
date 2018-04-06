#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int T, R[5], i, j=0;
	scanf("%d", &T);
	for(i=0; i<5; i++){
		scanf("%d", &R[i]);
	}
	for(i=0; i<5; i++){
		if(R[i] == T)
			j++;
	}
	printf("%d\n", j);
	
	return 0;
}