#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	double A, B, C, D, Exame, Media, Media2;
	
	scanf("%lf %lf %lf %lf", &A, &B, &C, &D);
	
	Media = (A * 2.0 + B * 3.0 + C * 4.0 + D) / 10.0;
	printf("Media: %.1lf\n", Media);
	
	if (Media >= 7.0)
		printf("Aluno aprovado.\n");
	if (Media < 5.0)
		printf("Aluno reprovado.\n");
	if (Media >= 5.0 && Media <= 6.9)
	{
		printf("Aluno em exame.\n");
		scanf("%lf", &Exame);
		printf("Nota do exame: %.1lf\n", Exame);
		
		
		Media2 = (Media + Exame) / 2.0;
		
		if (Media2 >= 5.0)
			printf("Aluno aprovado.\n");
		if (Media2 < 5.0)
			printf("Aluno reprovado.\n");
		printf("Media final: %.1lf\n", Media2);
	}
	return 0;
}