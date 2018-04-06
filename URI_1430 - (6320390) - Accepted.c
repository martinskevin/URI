#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	char jingles[205];
	int i, j = 0;
	float compassos = 0;

	while(1){
		scanf("%s", jingles);
		if(strcmp(jingles, "*") == 0)
			break;
		else{
			for(i=0; i < strlen(jingles); i++)
			{
				if(jingles[i] == '/'){
					if(compassos == 1.0 )
						j++;
					compassos = 0;
				}
				if(jingles[i] == 'W')
					compassos += 1.0;
				if(jingles[i] == 'H')
					compassos += 1.0 / 2.0;
				if(jingles[i] == 'Q')
					compassos += 1.0 / 4.0;
				if(jingles[i] == 'E')
					compassos += 1.0 / 8.0;
				if(jingles[i] == 'S')
					compassos += 1.0 / 16.0;
				if(jingles[i] == 'T')
					compassos += 1.0 / 32.0;
				if(jingles[i] == 'X')
					compassos += 1.0 / 64.0;
			}
		}
		printf("%d\n", j);
		j = 0;
	}
}