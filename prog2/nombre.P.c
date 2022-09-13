#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float  equation (float a,float  b, float c, float var){
	if((b*b)-4*a*c>0){
	float delta,r1,r2;
	delta=(b*b)-4*a*c;
	r1=-b-sqrt(delta)/2*a;
	r2=-b+sqrt(delta)/2*a;
	printf("%f et %f" ,r1,r2);
	
	
	}

	
	
}


float main (){
    float a;
	float b;  
	float c;
	float var ;
		 printf(" donnez le valeur de a :\n");
	 scanf("%f",&a);
	 printf("donnez le valeur de b :\n");
	scanf("%f",&b);
	printf("donnez le valeur de c :\n");
	scanf("%f",&c);
    equation(float a,float b, float c);
	
	
	return 0;
}
