#include <stdio.h>

int main ()
{
	int Ident, HorasTrab;
	float ValorHora,Salario;
	
	scanf("%d%d%f", &Ident, &HorasTrab, &ValorHora);
	Salario = HorasTrab * ValorHora;
	printf("NUMBER = %d\n", Ident);
	printf("SALARY = U$ %.2f\n", Salario);
	
	return 0;
}
