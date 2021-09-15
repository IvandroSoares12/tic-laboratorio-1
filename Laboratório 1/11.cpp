#include<stdio.h>
#include<math.h>
int main(){
	int a,b c,delta,x1,x2;
	printf ("Digite os tres valores:\n");
	scanf ("%d %d%d",&a,&b,&c);
	if(a!=0){
		delta=pow(b,2)-4*a*c;
		if(delta<0)
			printf("Raizes imaginarias");
		else if(delta==0)
			x1=x2=(-b/2*a);
			printf ("\n Existe apenas uma solução para x1 e x2 e=%d",x1);
		else if(delta>0)
			x1=((-b+sqrt(delta))/2*a;
			x2=((-b -sqrt(delta))/2*a;
			printf("\n A solução de x1 e de=%i",x1);
			printf ("\n A solução de x2 e de=%d",x2);
}
return 0;
}
