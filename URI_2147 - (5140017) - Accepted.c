#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	char MusicaDeRetardado[10001]; 
	double Numero;
	int Testes, Cont;
	scanf("%d", &Testes);
	
	while(Cont<Testes){
		
		scanf("%s", MusicaDeRetardado);
	
		Numero = strlen(MusicaDeRetardado) / 100.00;
	
		printf("%.2lf\n", Numero);
		
		Cont++;
	}
	
	return 0;
}