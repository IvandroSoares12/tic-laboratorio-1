#include<stdio.h>
int main(){
	float prt,prc,qtc;
	printf("Digite o custo do espectaculo:");
	scanf("%f",&prt);
	printf ("Digite o preco do convite\n");
	scanf ("%f",&prc);
	qtc=prt/prc;
	printf("O numero de convites que devem ser vendidos para que pelo menos se alcance o custo do espectaculo e de = %f\n",qtc);
return 0;
}
