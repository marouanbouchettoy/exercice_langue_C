#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void bies  (int a ){
	
	if ( (a%4==0 && a%100!=0)|| a%400==0 )
	printf("cette annee est bisectrice  ");
	else
	
	printf("cette annee nest pas bisetrive ");
	
}
int main(){
	
int a;
printf("donnez une annee\n ");
scanf("%d",&a);
bies(a);	
	
	
return 0;
	
}
