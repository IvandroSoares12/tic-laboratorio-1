#include<stdio.h>
int main(){
	printf ("Digite o numero:");
	scanf ("%i",&num);
	for(i=1;i<num;i++){
		f*=i;
		if(i==num-1)
			printf("%i=",i);
		else
			printf ("%i *",i);
	}
return 0;
}
