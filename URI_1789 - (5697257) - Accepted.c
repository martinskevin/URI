#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int L, Lesmas[500], Lesminha = 0;
	int Cont;
	
	while(scanf("%d", &L) != EOF){
		for(Cont=0; Cont<L; Cont++){
			scanf("%d", &Lesmas[Cont]);
		}
		for(Cont=0; Cont<L; Cont++){
			if(Lesmas[Cont]>Lesminha){
				Lesminha = Lesmas[Cont];
			}
		}
		if(Lesminha < 10)
			printf("1\n");
		else if(Lesminha >= 10 && Lesminha < 20)
			printf("2\n");
		else
			printf("3\n");
		Lesminha = 0;
	}
	
	return 0;
}