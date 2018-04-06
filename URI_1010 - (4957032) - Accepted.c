#include <stdio.h>

int main()
{
	int CodigoP1, CodigoP2, NumeroP1, NumeroP2;
	float ValorP1 = 0, ValorP2 = 0, Total = 0;
	
	scanf("%d %d %f", &CodigoP1, &NumeroP1, &ValorP1);
	scanf("%d %d %f", &CodigoP2, &NumeroP2, &ValorP2);
	
	Total = NumeroP1 * ValorP1 + NumeroP2 * ValorP2;
	
	printf("VALOR A PAGAR: R$ %.2f\n", Total);
	
	return 0;
}