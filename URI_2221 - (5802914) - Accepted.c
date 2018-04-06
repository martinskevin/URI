#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	float ValorGolpe[2] = {0.0};
	int Ataque, Defesa, Level, Bonus;
	int T, i;
	
	scanf("%d", &T);
	while(T>0){
		scanf("%d", &Bonus);
		for(i=0; i<2; i++){
			scanf("%d %d %d", &Ataque, &Defesa, &Level);
			if((Level % 2) != 0){
				Bonus = 0;
			}
			ValorGolpe[i] = ((Ataque + Defesa) / 2.0) + Bonus;
		}
		i=0;
		if(ValorGolpe[i] == ValorGolpe[i + 1]){
			printf("Empate\n");
		}			
		else if(ValorGolpe[i] < ValorGolpe[i + 1]){
			printf("Guarte\n");
		}
		else if(ValorGolpe[i] > ValorGolpe[i + 1])
			printf("Dabriel\n");
		T--;
		
	}
	
	return 0;
}