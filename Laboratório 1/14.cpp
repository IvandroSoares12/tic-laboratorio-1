#include<stdio.h>
	int main(){
	int n,soma,soma2,contp,conti,mediai,mediap;
	for(n=0;n<10;n++){
		printf ("Digite os numeros\n");
		scanf("%i",&n);
		if(n%2==0){
			contp++;
			soma+=contp;
		}
		if(n%2!=0){
			conti++;
			soma2+=conti;
		}
		mediap=soma/contp;
		mediai=soma2/conti;
		printf ("A media dos numeros pares e de e=%i\n",mediap);
		printf ("A media dos impares e =%i\n",mediai);
		
	}
		
return 0;
}
