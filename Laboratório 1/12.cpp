#include<stdio.h>

int main(){
	int num,n1,n2,n3,n4;
	printf ("Digite numeros com 5 digitos:");
	scanf ("%i",&num);
	n1=num %10000;
	n2=(num/1000)%10;
	n3=(num%1000)/100;
	n4=(num%100)/10;
	n5=num%10;
	if (n1==n5 &&n2==n4)
		printf("O numero %i e palindrono",num);
	
return 0;
}



