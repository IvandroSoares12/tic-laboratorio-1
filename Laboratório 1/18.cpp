#include<stdio.h>
int main(){
	char nome[30][20];
	int diarias;
	float custo;
	float ganhototal=0;
	
	for(int i=0;i<30;i++){
		printf("Digite o nome do cliente:\n");
		gets(nome[i]);
	}
	for(int i=0;i<30;i++){
		printf ("Digite o nº de diarias:\n");
		scanf ("d",&diarias);
		if(diarias<15)
			custo=(diarias*50.00)+4.00;
			printf(" O cliente %s tem na sua conta%f\n",nome[i],custo);
		else if(diarias==15)
			custo=(diarias*50.00)+3.60;
			printf("O cliente %s tem na sua conta %f\n",nome [i],custo);
		else if(diarias>15)
			custo=(diarias*50.00)+3.00;
			printf ("O cliente %s tem na sua conta %f\n"nome[i],custo);
			printf ("O cliente do quarto %d deve %f",i,custo);
			gantototal+=custo;
	}
	
	printf("ganho total=%f\n",ganhototal);

	return 0;
}
