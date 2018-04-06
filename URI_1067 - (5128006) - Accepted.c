#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int Numero, Cont=1;
	scanf("%d", &Numero);
	while(Cont<=Numero){
		if((Cont % 2) != 0)
			printf("%d\n", Cont);
		Cont++;
	}
	
	return 0;
}