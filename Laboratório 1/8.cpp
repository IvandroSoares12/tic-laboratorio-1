# include<stdio.h>
int main(){
	float ht,hts,imp,sb,sa;
	printf ("Digite p salario minino:");
	scanf ("%f",&sm);
	printf ("Digite as horas trabalhadas\n");
	scanf("%f",&hts);
	hts=sm/2;
	sb=ht*hts;
	imp=(sb*3)/100;
	sa=sb-imp;
	printf("O Salario a receber e de=% f \n",sa);
return 0;
}
