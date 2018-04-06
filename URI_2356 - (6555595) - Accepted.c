#include <stdio.h>
#include <string.h>


int main()
{
   	char codigo1[105];
   	char codigo2[105];

   	while(1){
	   	scanf("%s", codigo1);
	   	scanf("%s", codigo2);

	   	if(getchar() == EOF)
	   		break;

	   	if(strstr(codigo1, codigo2) == 0)
	   		printf("Nao resistente\n");
	   	else
	   		printf("Resistente\n");
	   	
	}
   
   	return(0);
}