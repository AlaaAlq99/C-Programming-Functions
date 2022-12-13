#include <stdio.h>
int Even_Odd (int x );
void main (void){
	int a;
	printf(" Enter num is :");
	scanf ("%d",&a);
	Even_Odd (a);
}
int Even_Odd (int x ){
	if (x%2==0)
	    printf("Number is EVEN");
	else 
		printf("Number is ODD");
}
