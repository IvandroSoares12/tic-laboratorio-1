#include<stdio.h>
int main(){
	float saf,san,per;
	printf ("Digite o salario do funcionario:\n");
	scanf("%f",&saf);
	printf("Digite o percentual de aumento:");
	scanf ("%f",&per);
	san=(saf+(saf*per))/100;
	print("O Novo salario do funcionario com o percentual de aumento de %f e de %f =\n",per,san);
return 0;
}
