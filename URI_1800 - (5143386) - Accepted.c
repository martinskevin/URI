#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int Q, E, Cont=0, Cont2=0, Ok=0;
	int Semana[1000], Dias[1000];
	scanf("%d%d", &Q, &E);
	
	
	//ENTRADA DE DADOS
	for(Cont=0; Cont<E; Cont++){
		scanf("%d", &Dias[Cont]);
	}
	Cont = 0;
	for(Cont=0; Cont<Q; Cont++){
		scanf("%d", &Semana[Cont]);
	}
	Cont = 0;
	
	
	//LOGICA 
	while(Cont<Q){
		Ok = 0;
		while(Cont2<Q){
			if(Cont2<E){
				if(Semana[Cont] == Dias[Cont2]){
					Ok = 1;
					break;
				}	
			}
			
			if(Semana[Cont] == Semana[Cont2] && Cont>Cont2){
				Ok = 1;
				break;
			}
			Cont2++;
			
		}
	
		if (Ok == 0){
			printf("1\n");
		}
		else{
			printf("0\n");
		}
		
		Cont++;
		Cont2 = 0;
	}
		
	
	
	return 0;
}












