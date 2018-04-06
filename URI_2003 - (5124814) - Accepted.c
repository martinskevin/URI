#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int Hora, Minutos, TotalMin, Testes;
	
	while (scanf("%d:%d", &Hora, &Minutos) !=EOF){
		
		TotalMin = Hora * 60 + Minutos + 60;
	
		if(TotalMin>480){
			TotalMin -= 480;
		}
		else
			TotalMin = 0;
		printf("Atraso maximo: %d\n", TotalMin);
	}
	
	return 0;
}