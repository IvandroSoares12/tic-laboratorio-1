#include<stdio.h>
int main(){
	float saf,san;
	printf ("Digite o salario do funcionario:\n");
	scanf("%f",&saf);
	san=(saf+(saf*25))/100;
	printf("O Novo salario do funcionario com o percentual de aumento de 25% e de %f \n",san);
return 0;
}
