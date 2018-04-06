#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int Segundos, Minutos, Horas;
	
	scanf("%d", &Segundos);
	
	Minutos = Segundos / 60;
	Segundos = Segundos % 60;
	Horas = Minutos / 60;
	Minutos = Minutos % 60;
	
	printf("%d:%d:%d\n", Horas, Minutos, Segundos);
	
	return 0;
}