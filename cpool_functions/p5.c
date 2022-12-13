#include <stdio.h>
int root (int x );
void main (void){
	int a,x;
	printf(" Enter num is :");
	scanf ("%d",&a);
	x = root(a);
	printf("Root is %d \n",x);
}
int root (int x ){
	int i,y;
	for (i =1;i<=x;i++){
		y=x/i;
	if (y==i){
	    return y;
	    break;
	}
	}
}
