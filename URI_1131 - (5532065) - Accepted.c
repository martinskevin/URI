#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int Inter=0, Gremio=0, Empate=0, GolI, GolG;
	int N, i=1;
	while(1){
		scanf("%d %d", &GolI, &GolG);
		if(GolI>GolG)
			Inter++;
		else if(GolI<GolG)
			Gremio++;
		else
			Empate++;
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d", &N);
		if(N==2)
			break;
		i++;
	}
	printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n", i, Inter, Gremio, Empate);
	if(Inter>Gremio)
		printf("Inter venceu mais\n");
	else if(Inter<Gremio)
		printf("Gremio venceu mais\n");
	else
		printf("Nao houve vencedor\n");
	return 0;
}