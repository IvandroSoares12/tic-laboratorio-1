#include<stdio.h>

int main(){
		
	int soma_imp, m;
	
	for(int i=0;i<=500;i++){
		m=3*i;
		if(i%2!=0)
			soma_imp+=m;
	}	
	
	printf("Soma dos ímpares = %d", soma_imp);
	
	return 0;
}
