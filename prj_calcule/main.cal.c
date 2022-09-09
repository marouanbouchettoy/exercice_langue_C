#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	float a,b,s,m,p,d;
	
	char signe;
	printf("donnez la premier nombre:\n");
	scanf("%f",&a);
		printf(" donnez le signe : ");
	scanf("%s",&signe);  
	printf("donnez la deuxieme nombre:\n");
	scanf("%f",&b);

	
	if(signe== '+'){
		s=a+b;
		printf ("le somme des nombre est :\n= %.2f", s);}
     else if (signe== '-'){
    m= a-b;
    	printf ("le moin des nombre est :\n= %.2f", m);
	 }
	 else if (signe=='*'){
	 p= a*b;
	 	printf ("le prouduit des nombre est :\n= %.2f", p);
	 }
	 else if (signe == '/'){
	 d = a/b;
	 	printf ("la devision des nombre est :\n= %.2f", d);	
	 }
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
