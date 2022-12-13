#include <stdio.h>
float Diamter (float x);
float Circumference (float x);
float Area (float x);
void main (void){
	float r,dia,circum,area;
    printf("Enter Radious: ");
    scanf("%f",&r);
	dia = Diamter (r);
	printf("Diamter is :%f units\n",dia);
	circum = Circumference (r);
	printf("Circumference is :%f units\n",circum);
	area = Area (r);
	printf("Area is :%f units\n",area);
}
float Diamter (float x){
	return 2*x;
}
float Circumference (float x){
	return 2*3.14*x;
}
float Area (float x){
	return 3.14*x*x;
}

	