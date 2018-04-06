#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int C, Divisor=1, Numero, Soma=0, Cont, Cont2;
	
	scanf("%d", &C);
	
	for (Cont=0; Cont<C; Cont++)
	{
		scanf("%d", &Numero);
		for (Cont2=1; Cont2<Numero; Cont2++)
			if ((Numero % Divisor)==0)
			{
				Soma = Soma + Divisor;
				Divisor++;
			}	
			else
				Divisor++;
		
		if (Numero==Soma)
			printf("%d eh perfeito\n", Numero);
		else
			printf("%d nao eh perfeito\n", Numero);
		Cont2 = 0;
		Soma = 0;
		Divisor = 1;
	}
	
	return 0;
}