#include <stdio.h>
void main (void){
	int num,i=2;
	printf("enter the number:");
	scanf("%d",&num);   
	while ( i <= num ){ 
     if ( num == i ){
		 printf("this is number is prime"); 
		 break;
	 }
      else if ( num%i == 0 ) 
	  {		  
	  printf("this is number is not prime") ;
	   break;  
	  }
      i++; 
   }  
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