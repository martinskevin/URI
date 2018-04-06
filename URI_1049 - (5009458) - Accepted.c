#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	char Aguia[] = "aguia", Pomba[] = "pomba", Homem[] = "Homem";
	char Vaca[] = "vaca", Pulga[] = "pulga", Lagarta[] = "lagarta";
	char Sanguessuga[] = "sanguessuga", Minhoca[] = "minhoca";
	char Carnivoro[] = "carnivoro", Onivoro[] = "onivoro";
	char Herbivoro[] = "herbivoro", Hematofago[] = "hematofago";
	char Anelideo[] = "anelideo", Inseto[] = "inseto";
	char Mamifero[] = "mamifero", Ave [] = "ave";
	char Vertebrado[] = "vertebrado", Invertebrado[] = "invertebrado";
	char Tipo1[13], Tipo2[13], Tipo3[13];
	
	scanf("%s %s %s", Tipo1, Tipo2, Tipo3);
	
	if(strcmp(Tipo1, Vertebrado)==0)
	{
		if(strcmp(Tipo2, Ave)==0)
		{
			if(strcmp(Tipo3, Carnivoro)==0)
				printf("aguia\n");
			else if(strcmp(Tipo3, Onivoro)==0)
				printf("pomba\n");
		}
		else if(strcmp(Tipo2, Mamifero)==0)
		{	
			if(strcmp(Tipo3, Onivoro)==0)
				printf("homem\n");
			else if(strcmp(Tipo3, Herbivoro)==0)
				printf("vaca\n");
		}
	}
	
	else if(strcmp(Tipo1, Invertebrado)==0)
	{
		if(strcmp(Tipo2, Inseto)==0)
		{
			if(strcmp(Tipo3, Hematofago)==0)
				printf("pulga\n");
			else if(strcmp(Tipo3, Herbivoro)==0)
				printf("lagarta\n");
		}
		else if(strcmp(Tipo2, Anelideo)==0)
		{	
			if(strcmp(Tipo3, Hematofago)==0)
				printf("sanguessuga\n");
			else if(strcmp(Tipo3, Onivoro)==0)
				printf("minhoca\n");
		}
	}
	
	return 0;
}