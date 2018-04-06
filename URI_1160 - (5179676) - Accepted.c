#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int T, PA, PB, Tempo=0;
	double G1, G2;
	
	scanf("%d", &T);
	while(T>0){
		scanf("%d %d %lf %lf", &PA, &PB, &G1, &G2);
		while(PA <= PB){
			PA += PA * G1 / 100.00;
			PB += PB * G2 / 100.00;
			Tempo++;
			if(Tempo > 100){
				printf("Mais de 1 seculo.\n");
				break;
			}
		}
		if(PA > PB && Tempo <= 100)
			printf("%d anos.\n", Tempo);
		T--;
		Tempo = 0;
	}
	
	return 0;
}






