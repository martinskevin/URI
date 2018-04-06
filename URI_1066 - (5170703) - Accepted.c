#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int N[5], Cont, Nega=0, Posi=0, Impar=0, Par=0;
	
	for(Cont=0; Cont<5; Cont++){
		scanf("%d", &N[Cont]);
		if((N[Cont]%2)==0)
			Par++;
		if(N[Cont]>0)
			Posi++;
		if(N[Cont]<0)
			Nega++;
		if((N[Cont]%2)!=0)
			Impar++;
	}
	printf("%d valor(es) par(es)\n", Par);
	printf("%d valor(es) impar(es)\n", Impar);
	printf("%d valor(es) positivo(s)\n", Posi);
	printf("%d valor(es) negativo(s)\n", Nega);
	
	return 0;
}