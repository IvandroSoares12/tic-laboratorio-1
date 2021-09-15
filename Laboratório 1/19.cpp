#include<stdio.h>
int main(){
	int fib,n1,n2,i,l;
	for(i=3;i<20;i++){
		fib=n1+n2;
		n1=n2;
		n2=fib;
		printf ("%d",fib,",");
	}
}
