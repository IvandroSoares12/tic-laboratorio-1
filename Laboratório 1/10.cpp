#include<stdio.h>

int main(){
	int q,vq,vp;
	float sa,vr;
	printf ("Digite o salario minimo :\n");
	scanf ("%f",&sa);
	printf ("Digite a quantidade de quilowatts por residencia:");
	scanf ("%i",&q);
	vq=sa/5;
	vr=vq *q;
	vp=vr-((vr*15)/100;
	printf("O valor de cada quilowatt e de =%i",vq);
	printf ("O valor a ser pago por essa residencia e =%f\n",vr);
	printf ("O valor a ser pago com o desconto de 17% e =%i\n",vp);
return 0;
}
