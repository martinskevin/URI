#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	double L1, L2, L3, A, B, C, OK=0;
	scanf("%lf %lf %lf", &L1, &L2, &L3);
	
	if(L1>=L2 && L1>=L3){
		A = L1;
		B = L2;
		C = L3;
	}
	if(L2>=L1 && L2>=L3){
		A = L2;
		B = L1;
		C = L3;
	}
	if(L3>=L1 && L3>=L2){
		A = L3;
		B = L1;
		C = L2;
	}
	
	if(A>=B+C)
		printf("NAO FORMA TRIANGULO\n");
	else{
		if(A*A==B*B+C*C)
			printf("TRIANGULO RETANGULO\n");
		if(A*A>B*B+C*C)
			printf("TRIANGULO OBTUSANGULO\n");
		if(A*A<B*B+C*C)
			printf("TRIANGULO ACUTANGULO\n");
		if(A==B&&A==C&&B==C){
			printf("TRIANGULO EQUILATERO\n");
			OK=1;
		}
		if((A==B||A==C||B==C) && OK==0)
			printf("TRIANGULO ISOSCELES\n");
		}
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}