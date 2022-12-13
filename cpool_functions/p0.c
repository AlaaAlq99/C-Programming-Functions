#include <stdio.h>
int cube (int x);
void main (void){
	int num;
    printf("Enter Number: ");
    scanf("%d",&num);
	num = cube (num);
	printf("Cube of Numberis :%d ",num);
}
int cube (int x){
	return x*x*x;
}
	