#include<stdio.h>

int main(){
	float pre,custd,vp;
	int per,prc,pf;
	printf ("Digite o preço da fabrica\n");
	scanf ("%f",&pre);
	printf ("Digite o percentual de lucro de distribuidor");
	scanf ("%i",&per);
	printf ("Digite o percentual do imposto:\n");
	scanf ("%i",&prc);
	custd=(per*pre)/100;
	vp=(prc*pre)/100;
	pf=pre+custd+vp;
	printf (" O valor correspondente ao lucro do distribuidore =%f\n",custd);
	printf (" O valor correspondente aos impostos e se %f\n",vp);
	printf(" O preço final do veiculo e de =%i\n",pf);
return 0;
}
