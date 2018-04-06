#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int Numero=1;
	
	while(Numero < 101){
		if((Numero % 2) == 0)
			printf("%d\n", Numero);
		Numero++;
	}
		
	return 0;
}