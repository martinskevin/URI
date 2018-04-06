#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int Senha;
	
	while(1){
		scanf("%d", &Senha);
		if(Senha == 2002)
			break;
		else
			printf("Senha Invalida\n");
	}
	printf("Acesso Permitido\n");
	
	return 0;
}