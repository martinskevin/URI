#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int N, Cont=1;
	scanf("%d", &N);
	
	while(Cont<=10000){
		if((Cont%N)==2)
			printf("%d\n", Cont);
		Cont++;
	}
	
	return 0;
}