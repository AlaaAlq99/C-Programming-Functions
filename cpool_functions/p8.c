#include <stdio.h>
int root_of_num (int x,int y );
void main (void){
	int a,b,x;
	printf(" Enter num is :");
	scanf ("%d",&a);
	printf(" Enter num of Root :");
	scanf ("%d",&b);
	x = root_of_num(a,b);
	printf("Root is %d \n",x);
}
int root_of_num (int x , int y){
	int i,c,j,z;
	for (i =1;i<=x;i++){
		z=x;
		for (j=1;j<y;j++){
	         c=z/i;
             z=c;			 
	      }
	 if (c==i){
	 return c;
     break;
	}
	}
}