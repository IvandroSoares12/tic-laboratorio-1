#include<stdio.h>
float alch=1,50,alju=1.10,cont;
	while(alch>alju){
		alch+=0.02;
		alju+=0.30;
		cont++;
	}
	printf ("Serão necessarios %f anos para o Juaca ser maior que o chico:",cont);
return 0;
}
