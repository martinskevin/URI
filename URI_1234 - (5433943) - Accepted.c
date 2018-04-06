#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char S[60];
	short i, j=0;
	
	while(fgets(S, 60, stdin)!= NULL){
	
	for(i=0; i < strlen(S); i++){
		if(S[i] == '\n')
			break;
		if(S[i] == ' ')
			S[i] = ' ';
		else{
			if(j % 2 == 0){
				S[i] = toupper(S[i]);
			}
			else
				S[i] = tolower(S[i]);
			j++;
		}
		
	}
	j=0;
	printf("%s", S);
	
}	
	if (strlen(S)==i)
		printf("\n");
	
	
	return 0;
}