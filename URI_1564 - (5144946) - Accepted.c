#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int N, Cont=0;
	
	while(scanf("%d", &N) != EOF){
		if(N==0)
			printf("vai ter copa!\n");
		else
			printf("vai ter duas!\n");
	}
	
	return 0;
}