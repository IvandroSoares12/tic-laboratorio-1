#include<stdio.h>
int main(){
int maior,menor, al;
	for(al=1;al<15;al++){
		scanf ("%f",&al);
		if(al==0)
			menor=al;
		else if(menor<al)
			menor=al;
		if(al>maior)
			maior=al;
	}
	printf ("A maior altura e de=% i",maior);
	printf ("A menor alguma e =%i\n",menor);
	return 0;
}
