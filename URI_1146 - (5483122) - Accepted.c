#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int X;
	int i;
	
	while(1){
		scanf("%d", &X);
		if(X==0)
			break;
		for(i=1; i<X; i++){
			printf("%d ", i);
		}
		printf("%d\n", X);
	}
	
	return 0;
}