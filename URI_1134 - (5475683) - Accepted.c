#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int G=0, A=0, D=0;
	int T;
	
	while(1){
		while(1){
			scanf("%d", &T);
			if(T>0 && T<5)
				break;
		}
		if(T==4)
			break;
		else if(T==1)
			A++;
		else if(T==2)
			G++;
		else
			D++;
			
	}
	printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", A, G, D);
	
	return 0;
}