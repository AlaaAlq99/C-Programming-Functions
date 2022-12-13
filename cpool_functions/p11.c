#include <stdio.h>
float power (float base , float exponant);
void main (void){
	float m ,a,b;
	scanf("%f%f",&a,&b);
	if(b>0){
	  m=power (a,b);
	  printf(" %f power %f is %f",a,b,m);
	}
    else{
		b=b*-1;
	  m=power(a,b);
	  b=b*-1;
	  printf(" %f power %f is %f",a,b,1/m);
	}
}
float power (float base , float exponant){
	if (exponant <=0)
		return 1;
	return base * power (base ,exponant-1);
}
