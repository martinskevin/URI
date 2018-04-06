#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int X, Y;
	
	while(1){
		scanf("%d %d", &X, &Y);
		if(X==Y)
			break;
		else if(X<Y)
			printf("Crescente\n");
		else
			printf("Decrescente\n");
	}
	
	return 0;
}