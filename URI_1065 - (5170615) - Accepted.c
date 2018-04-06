#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int N[5], Cont, Par=0;
	
	for(Cont=0; Cont<5; Cont++){
		scanf("%d", &N[Cont]);
		if((N[Cont]%2)==0)
			Par++;
	}
	printf("%d valores pares\n", Par);
	
	return 0;
}