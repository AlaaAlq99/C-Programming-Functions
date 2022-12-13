#include <stdio.h>
int Minimum (int x , int y);
int Maximum (int x , int y);
void main (void){
	int x ,y, a, b;
	printf(" Enter num 1 is :");
	scanf ("%d",&a);
	printf(" Enter num 2 is:");
	scanf ("%d",&b);
	x = Minimum (a , b);
	printf(" Minimum num is :%d",x);
	y = Maximum (a , b);
	printf(" Maximum num is :%d",y);
}
int Minimum  (int x , int y){
	if (x<y)
		return x;
	else 
		return y;
}
int Maximum  (int x , int y){
	if (x>y)
		return x;
	else 
		return y
	;
}