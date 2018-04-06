#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
	
#define Min  	60
#define Dia 	24
int main (){
	int Hi,Mi, Hf,Mf,hora, min ;
	scanf("%d %d %d %d", &Hi, &Mi, &Hf, &Mf);
	hora = Hf - Hi;
	min = Mf - Mi;
	if(hora < 0){
		hora = Dia + hora;
	}
	if(min < 0){
		min = Min + min;
		hora--;
	}
	else if(Hi == Hf && Mi == Mf){
		hora = Dia;
		min = 0;
	}
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, min);
return 0;
}