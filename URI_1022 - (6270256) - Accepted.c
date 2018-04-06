#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct { int num, den;} TDA;

int mdc(int, int);
TDA Soma(TDA, TDA);
TDA Subtrai(TDA, TDA);
TDA Multiplica(TDA, TDA);
TDA Divide(TDA, TDA);
TDA Simplifica(TDA);

int main(){
	TDA v1, v2, result;
	int i;
	char operador;

	scanf("%d", &i);

	while(i > 0){
		scanf("%d / %d %c %d / %d", &v1.num, &v1.den, &operador, &v2.num, &v2.den);

		if(operador == '+'){
			result = Soma (v1, v2);
			printf("%d/%d", result.num, result.den);
		}

		if(operador == '-'){
			result = Subtrai (v1, v2);
			printf("%d/%d", result.num, result.den);
		}
		
		if(operador == '*'){
			result = Multiplica (v1, v2);
			printf("%d/%d", result.num, result.den);
		}
		
		if(operador == '/'){
			result = Divide (v1, v2);
			printf("%d/%d", result.num, result.den);
		}
		i--;

		printf(" = ");
		result = Simplifica(result);
		printf("%d/%d\n", result.num, result.den);
	}
}

int mdc(int m, int n)
{	if (m < 0) m = -m;
	if (n < 0) n = -n;

	if (m % n == 0)
		return n;
	else
		return mdc(n, m % n);
}

TDA Soma (TDA p1, TDA p2){
	TDA result;

	result.num = p1.num * p2.den + p2.num * p1.den;
	result.den = p1.den * p2.den;

	return result;
}

TDA Subtrai (TDA p1, TDA p2){
	TDA result;

	result.num = p1.num * p2.den - p2.num * p1.den;
	result.den = p1.den * p2.den;

	return result;
}

TDA Multiplica (TDA p1, TDA p2){
	TDA result;

	result.num = p1.num * p2.num;
	result.den = p1.den * p2.den;

	return result;
}

TDA Divide (TDA p1, TDA p2){
	TDA result;

	result.num = p1.num * p2.den;
	result.den = p1.den * p2.num;

	return result;
}

TDA Simplifica(TDA p)
{	TDA result;
	int vm = mdc(p.num, p.den);

	result.num = p.num / vm;
	result.den = p.den / vm;
	
	return result;
}


